class Solution {
public:
    int fib(int N) {
        if (N < 2)
        {
            return N;
        }

        //状态定义,f[N],当前的值
        //状态转移方程:f[N] = f[N-1] + f[N-2]
        //定义边界：N=0,N=1

        int f0 = 0,f1 = 1,f2 = 0;
        for (int i=2;i<=N;i++) {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        
        return f2;
    }
};