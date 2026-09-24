class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>>ans;
      priority_queue<pair<int,vector<int>>>pq;
      if(points.size()==1)
      return points;
    
      for(auto it:points)
      {
        int x=it[0];
        int y=it[1];
        int currdistance=x*x+y*y;
        
        pq.push({currdistance,it});
        
        if(pq.size()>k)
        pq.pop();
      }  
      for(int i=0;i<k;i++)
      {
        ans.push_back({pq.top().second});
        pq.pop();
      }
      return ans;
    }
};
