class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      int prefix=1,suffix=1;
      vector<int>pre(n,0);
      
      vector<int>post(n,0);
      vector<int>ans(n,0);
      for(int i=0;i<n;i++)
      {
        prefix*=nums[i];
        pre[i]=prefix;
      }  
       for(int i=n-1;i>=0;i--)
      {
        suffix*=nums[i];
        post[i]=suffix;
      }  
      for(int i=0;i<n;i++)
      {
        if(i==0)
        ans[i]=(post[i+1]);

        else if(i==n-1)
        ans[i]=pre[i-1];

        else
        {
            ans[i]=(pre[i-1]*post[i+1]);
        }
      }
       cout<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<"pre "<<pre[i]<<" and "<<post[i];
      }
      return ans;
   
    }
};
