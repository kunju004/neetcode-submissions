class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto k:nums)
        {
          mp[k]++;
        }
        for(auto &itr:mp)
        {
          if(itr.second>1)
          return itr.first;
        }
        return -1;
    }
};
