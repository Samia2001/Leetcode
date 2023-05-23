//tough.I've learnt about cumulative calculation required at dp problems.also learnt how to return max of any two columns of a row
class Solution {
public:
    int dp[50][50] ;
    map<pair<int,int>,int >mx;
    int sol(int left,int right,vector<int>& v) {
        if(left==right)
        return 0;
        if(dp[left][right]!=-1)
        return dp[left][right];
        int mn=INT_MAX;
        for(int i=left;i<right;i++)
        {
            int cur= mx[{left,i}]*mx[{i+1,right}] + sol(left,i,v)+sol(i+1,right,v);
            mn = min(mn,cur);
        }
        return dp[left][right]=mn;
    }
    int mctFromLeafValues(vector<int>& v) {
        int n = v.size(),i ;
        
        for(i = 0;i<n;i++)
        {
            mx[{i,i}]=v[i];
            for(int j=i+1;j<n;j++)
            {
                mx[{i,j}]=max(mx[{i,j-1}],v[j]);
            }
        }
        memset(dp,-1,sizeof(dp));
        return sol(0,n-1,v);

    }
};
