
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string match=strs[0];
        for(int i=1; i<strs.size(); i++)
        {
           string p ="";
           for(int j=0;j<strs[i].size();j++)
           {
                if(strs[i][j]==match[j])
                {
                    p=p+strs[i][j];
                }
                else
                break;
           }
           
           match=p;
           if(match=="")break;
        }
    return match;
        
    }
};
