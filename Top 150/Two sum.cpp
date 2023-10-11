class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        vector<int>v;
        map<int,int>in;
        for(i = 0 ; i<nums.size();i++)
        {
            in[nums[i]]=i+1;
        }
        for(i = 0;i<nums.size();i++)
        {
            if(in[target-nums[i]]!=0 && in[target-nums[i]]!=(i+1))
            {
                v.push_back(i);
                v.push_back(in[target-nums[i]]-1);
                break;
            }
        }
        return v;
        
    }
};
