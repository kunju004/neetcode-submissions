class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
       
        for(char &k:s)
        {
            mp[k]++;
        }
        for(char &k:t)
        {
            mp[k]--;
        }
        for(auto &it:mp)
        {
            if(it.second!=0)
            return false;

        }
        return true;
    }
};
