class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            for (int j = 0; j < nums.size(); j++)
            {
                int second = nums[j];
                if (first + second == target && i != j)
                {
                    vector<int> vct{i,j} ;
                    return vct;
                }
            } 
        }
        vector<int> vct{0,0} ;
        return  vct;
    }
};
