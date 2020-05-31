class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         //状态定义,f[N],到当前楼梯的体力花费
        //状态转移方程:可能从前一阶或者前两阶爬上来的,但要寻找最优解，即从前两个阶梯中选择一个最小的
        //f[N] = min( f[N-1] ,f[N-2])
        //定义边界：N=0,or N=1开始
        int f0 = 0,f1 = 0, f2 = 0;
        f0=0;
        f1=min(cost[0],cost[1]);

        for (int i=2;i<cost.size();i++) {
            f2 = min(f0+cost[i-1],f1+cost[i]);

            f0 = f1;
            f1 = f2;
        }

        return f2;
    }
};