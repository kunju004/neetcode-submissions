class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;

        int ans = 0;
        int slow = 0;
        int fast = 1;

        while(fast < n)
        {
            if(prices[fast] > prices[slow])
            {
                int curr = prices[fast] - prices[slow];
                ans = max(ans, curr);
            }
            else
            {
                slow = fast;
            }

            fast++;
        }

        return ans;
    }
};