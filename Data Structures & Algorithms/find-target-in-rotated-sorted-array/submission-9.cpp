class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low=0,high=nums.size()-1,mid;
       

      if(high==0)
      {
        if(nums[high]==target)
        return high;
        return -1;
      }
    
      int p=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
          
            if(nums[i]>nums[i+1])
            {
              p=i;
              break;
            }
            
        }
        if(p!=-1)
        {
         high=p;
        }
       while(low<=high)
       {
          
        mid=low+(high-low)/2;
        if(nums[mid]==target)
        return mid;

        if(nums[mid]<target)
        low=mid+1;

        else
        high=mid-1;
       }
       if(p!=-1)
       {
       low=p+1,high=nums.size()-1;
      
       while(low<=high)
       {
         mid=low+(high-low)/2;
        if(nums[mid]==target)
        return mid;

        if(nums[mid]<target)
        low=mid+1;

        else
        high=mid-1;
       }
       }
        return -1;
       } 
    
};
