class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5 = 0,count10 = 0;

        for (int i=0;i<bills.size();i++) {
            if (bills[i] == 5)
                count5++;
            else if (bills[i] == 10) {
                count5--;
                count10++;
            }
            else if (bills[i] == 20) {
                if (count10 > 0) {
                    count10--;
                    count5--;
                } else {
                    count5 -= 3;
                }
            }
            if (count5 < 0 || count10 < 0) {
            return false;
            }
        }

        return true;
    }
};
//三个变量，记录。5.10.的个数
//遇到5，5+1，遇到10，10+1，5-1，遇到20，首先减10，然后-5，
//如果结束前遇到变量小于0，结束