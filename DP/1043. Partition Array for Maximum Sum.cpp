//great problem.MUST DO!!!
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& a, int k) {
        int i,j,ans[506]={0},n=a.size();
        for(i = 0;i<n;i++)
        {
            int mx = 0;
            for(j = 0;j<=min(i,k-1);j++)
            {
                mx = max(mx,a[i-j]);
                ans[i+1]=max(ans[i+1],ans[i-j]+mx*(j+1));
                //cout<<i+1<<" "<<ans[i+1]<<endl;
            }
        }
        return ans[n];

    }
};
