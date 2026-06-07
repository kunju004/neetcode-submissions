class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string &s:strs)
        {
            string str=s;
            sort(str.begin(),str.end());
            mp[str].push_back(s);
        }
        for(auto &itr:mp)
        {
            ans.push_back({itr.second});
        }
        return ans;
    }
};
