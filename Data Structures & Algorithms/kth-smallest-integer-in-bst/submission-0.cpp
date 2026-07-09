/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
      priority_queue<int, vector<int>, greater<int>> pq;
       if(root==NULL)
       return 0;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
          
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* ptr=q.front();
                q.pop();
                pq.push(ptr->val);
                if(ptr->left)
                q.push(ptr->left);

                if(ptr->right)
                q.push(ptr->right);

            }

        }
        int ans;
        
        vector<int>num;
       while(!pq.empty())
       {
        num.push_back(pq.top());
        pq.pop();
       }
       ans=num[k-1];
        return ans;
    }
};
