class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        
        if (nums.size() == 2) {
            return nums[0]>nums[1] ? nums[1] : nums[0];
        }

        long left = 0;
        long right = nums.size() - 1 ;

        while (nums[left] > nums[right]) {
            long mid = (left+right)/2;

            if (nums[left] < nums[mid]) {
                left = mid + 1;
            } else {
                if (left == mid - 1) {
                    return nums[mid];
                }

                left += 1;
            }
        }

        return nums[left];
    }
};
//二分查找