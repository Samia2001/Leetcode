//greatttt problem.MUST DO!!!. I've learnt about storing increasing decreasing subsequence of any length
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size(),i,j,ans=0;
       
        
        for(i = 0;i<n;i++)
        {
            int ls = 0,rs=0,lg=0,rg=0;
            if(i>0)
            {
                for(j = i-1;j>=0;j--)
                {
                   if(rating[j]<rating[i])
                   ls++;
                   else
                   lg++; 
                }
            }
            for(j = i+1;j<n;j++)
                {
                   if(rating[j]<rating[i])
                   rs++;
                   else
                   rg++; 
                }
            ans = ans + (ls*rg)+(rs*lg);
        }
        
       return ans; 
    }
    
};
