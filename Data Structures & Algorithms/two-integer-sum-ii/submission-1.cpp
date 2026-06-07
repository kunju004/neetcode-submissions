class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
     
        
        int i,j;
        i=0,j=n-1;
        int sum;
        vector<int>ans;
        while(i!=n-1)
        {
            sum=numbers[i]+numbers[j];
            if(sum==target and i<j)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                 break;}
            if(j==i)
            {
                i++;
                j=n-1;;
            }
            else
            j--;

        }
        return ans;
    }
};
