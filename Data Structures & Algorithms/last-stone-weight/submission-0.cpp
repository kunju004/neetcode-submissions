class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int s=stones.size();
        int ans;
        if(s==0)
        return 0;

        if(s==1)
        return stones[0];

        priority_queue<int>pq;
        for(int x:stones)
        {
            pq.push(x);
        }
        while(pq.size()>1)
        {
            int curr=pq.top();
            pq.pop();
            int next=pq.top();
            pq.pop();
            ans=abs(curr-next);
            pq.push(ans);
        }
        return pq.top();
    }
};
