class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       
       if (singlePlusOne(digits,digits.size()-1))
       {
           vector<int> result(digits);
           result.insert(begin(result), 1);
           return result;
       } else {
            vector<int> vct(digits);
            return vct;
       }
    }

    int singlePlusOne(vector<int>& digits,int index) {
        int a = digits[index];
        if (a + 1 >= 10)
        {
            digits[index] = 0;
            if (index == 0)
            {
                return 1;
            }
            
            return  singlePlusOne(digits,index-1);
        }
        digits[index] = a +1;
        return 0;
    }
};
