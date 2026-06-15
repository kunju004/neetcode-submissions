class Solution {
public:
    int findMin(vector<int> &nums) {
        int minele=INT_MAX;
        int low=0,high=nums.size()-1,mid;
        while(low<high)
        {
            if(nums[low]>=nums[high])
            {
                swap(nums[low],nums[high]);
                high--;
                continue;
            }
            if(nums[low]<nums[high])
            {
                high=nums.size()-1;
                low++;
            }
        }
        return nums[0];
    }
};
