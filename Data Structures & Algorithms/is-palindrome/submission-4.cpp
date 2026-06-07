class Solution {
public:
    bool isPalindrome(string s) {
       vector<char> ans;
       int n=s.length();
       
       for(int i=0;i<n;i++)
       {
        
        if (isalnum(s[i]))
        {
        ans.push_back(s[i]);
        
        }
       }
   for(int i=0;i<ans.size();i++)
   {
    ans[i] = tolower(ans[i]);
   }
       
       int i,j;
       i=0,j=ans.size()-1;
    //     for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
       while(i<j)
       {
        if(tolower(ans[i])!=tolower(ans[j]))
        {  
        return false;
        }
        i++,j--;
       }
       return true;
    
    }
};
