class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1)
        return nums;
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int &p:nums)
        {
            mp[p]++;
        }
        for(auto &itr:mp)
        {
            
            pq.push({itr.second,itr.first});
        }
    

        if(k==1)
        {
            ans.push_back(pq.top().second);
            return ans;
        }

        while(k!=0)
        {
            
            ans.push_back(pq.top().second);
            // cout<<pq.top().second<<" ";
            pq.pop();
            k--;
        }
        if(ans.size()==0)
        return nums;
        
        for(int x=0;x<ans.size();x++)
        {
            cout<<ans[x]<<" kp";
        }
        return ans;
    }
};
