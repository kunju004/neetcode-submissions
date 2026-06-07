class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int currmax=INT_MIN;
        int currmin=INT_MAX;
        int i,j;
    //   stack<pair<int,int>>st;
    i=0,j=prices.size()-1;
   while(i<prices.size())
   {
    if(i==prices.size()-1)
    break;
    if(i==j)
    {
        i++;
        j=prices.size()-1;
    }
    ans=max(ans,prices[j]-prices[i]);
    j--;
   }
    return ans;
    }
};
