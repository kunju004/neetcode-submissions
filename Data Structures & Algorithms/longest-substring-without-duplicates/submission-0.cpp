class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int maxlength=0;
       
         for(int i=0;i<s.length();i++)
        {
            
            mp[s[i]]++;
              while(mp[s[i]]>1)
              {
                mp[s[left]]--;
                left++;
              }
              maxlength=max(maxlength,i-left+1);
             
        }
            return maxlength;
    }

};
