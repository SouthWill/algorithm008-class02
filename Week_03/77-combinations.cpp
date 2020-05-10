#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "helloc++" << endl;
    return 0;
}

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int> > ans;
        vector<int> list;
        dfs(ans,n,k,list,1);
    }

private:
    void dfs (vector<vector<int>> ans, int count ,int size,vector<int> list ,int index) {
        if (index == count || list.size() == size) {
            ans.push_back(list);
            return;
        }

        dfs(ans,count,size,list,index+1);
        list.push_back(index);
        dfs(ans,count,size,list,index+1);
        
        list.erase(list.end());
    }
};