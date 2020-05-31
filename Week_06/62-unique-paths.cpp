class Solution {
public:
    int uniquePaths(int m, int n) {
        //定义状态：走到当前格子有多少条不同路径,f[m][n]
        //状态迁移方程:f[m][n] = f[m][n-1] + f[m-1][n];
        //边界条件：n=0,m=0;
        vector<int> f(n,1);
        for (int i=1;i<m;i++) {
            for (int j=1;j<n;j++) {
                f[j] += f[j-1];
            }
        }

        return f[n-1];
    }
};