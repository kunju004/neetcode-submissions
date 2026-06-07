class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int currmax=INT_MIN;
        int currmin=INT_MAX;
    //   stack<pair<int,int>>st;
        for(int i=0;i<prices.size();i++)
    {
        for(int j=prices.size()-1;j>0;j--)
        {
            if(i==j)
            break;

            ans=max(ans,prices[j]-prices[i]);
        }
    }
    return ans;
    }
};
