//Easy needed a formula p = cnt-3+1, (p*(p+1))/2
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        int i,n=a.size(),ndif=0,s=0,cnt=0;
        if(n>2)
        {
            ndif=a[1]-a[0];
            for(i = 1;i<n;i++)
            {
                if(ndif==a[i]-a[i-1])
                cnt++;
                else
                {
                    cnt++;
                    if(cnt>1)
                    {
                    int p = (cnt-3+1);
                       s=s+(p*(p+1))/2;
                    }
                    cnt=1;
                    ndif=a[i]-a[i-1];
                }
            }
            if(cnt>1)
            {
                cnt++;
                int p = (cnt-3+1);
                s=s+(p*(p+1))/2;
            }
        }
        return s;
        
    }
};
