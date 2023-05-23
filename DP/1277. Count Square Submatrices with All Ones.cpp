class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) { 
        int n = matrix.size(),i,j,s=0;
        int m = matrix[0].size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
for(i = 0;i<n;i++)
  {
    dp[i][0]=matrix[i][0];
    for(j = 0;j<m;j++)
    {
      if(i==0)
        dp[i][j]=matrix[i][j];
      else if(i>0&&j>0)
      {if(matrix[i][j]==1)
      dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],     dp[i][j-1]))+1;
      }
    }
  }
  for(i = 0;i<n;i++)
  {
    for(j = 0;j<m;j++)
    {
      
      s+=dp[i][j];
    }
    
  }
  return s;
    }
};
