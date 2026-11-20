class Solution {
public:
    int trap(vector<int>& height) {
    
        int n=height.size();
        if(n==0)
        return 0;
        int l=0,r=n-1;
        int lmax=-1,rmax=-1;
        int ans=0;
        while(l<r)
        {
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(rmax<=lmax)
            {
                ans+=rmax-height[r];
                r--;
            }
            
            else
            {
                ans+=lmax-height[l];
                l++;
            }
        }
        
       
         return ans;
    }
   
};
