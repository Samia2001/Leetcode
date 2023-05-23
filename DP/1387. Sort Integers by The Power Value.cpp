// all about precalculation
class Solution {
public:
    int dp[1000006]={0};
    int call(int n)
    {
       if(n==1)
        return dp[n]=1;
       if(dp[n]!=0)
       return dp[n];
       int s=0;
       if(n%2==0)
       s=s+(1+call(n/2));
       else
       s=s+(1+call(3*n + 1));
       
       return dp[n]=s;    
    }
    int getKth(int lo, int hi, int k) {
        for(int i =1 ;i<=1000;i++)
        {
            dp[i]=call(i);
        }
        vector<pair<int,int> >v;
        for(int i = lo;i<=hi;i++)
        {
            cout<<dp[i]<<" "<<i<<endl;
            v.push_back({dp[i],i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
        
    }
};
