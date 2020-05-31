class Solution {
public:
    int fib(int N) {
        //状态定义,f[N],到当前楼梯有多少种方法
        //状态转移方程:可能从前一阶或者前两阶爬上来的
        //f[N] = f[N-1] + f[N-2]
        //定义边界：N=1,N=2

        if (N <= 2)
        {
            return N;
        }

        int f0 = 1,f1 = 2,f2 = 0;
        for (int i=3;i<=N;i++) {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        
        return f2;
    }
};