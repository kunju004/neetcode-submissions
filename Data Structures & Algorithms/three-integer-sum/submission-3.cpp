class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=i+1,k=j+1;
        
        if(n<3)
        return ans;
        set<vector<int>>st;
       
          while(i<n-2)
          {
           
            if((nums[i]+nums[j]+nums[k])==0)
            {
              cout<<i<<" "<<j<<" "<<k<<" new ";
               st.insert({nums[i],nums[j],nums[k]});
            }
             if(j==n-2)
            {
              i++;
              j=i+1;
              k=j+1;
              continue;
            }
             if(k==n-1)
            {
              j++;
              k=j+1;
              continue;
            }
            k++;
            }
           
         for(auto &it:st)
         {
          ans.push_back({it});
         }
        return ans;
    }
};
