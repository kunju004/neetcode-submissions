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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL and q==NULL)
        return true;

        if(p==NULL or q==NULL)
        return false;

        if(p->val!=q->val)
        return false;

        else
        {
          return(isSameTree(p->left,q->left) and isSameTree(p->right,q->right));
        }

        

        // queue<TreeNode*>q1;
        // queue<TreeNode*>q2;


        // TreeNode *t1,*t2;
        // t1=p,t2=q;
        // q1.push(t1);
        // q2.push(t2);
        // while(!q1.empty() and !q2.empty())
        // {
        //     t1=q1.front();
        //     t2=q2.front();

        //     q1.pop();
        //     q2.pop();
        //     if(t1==NULL and t2==NULL)
        //     continue;

        //     if(t1==NULL and t2!=NULL or t2==NULL and t1!=NULL)
        //     return false;

        //     if(t1->val!=t2->val)
        //     return false;

        //     q1.push(t1->left);
        //     q1.push(t1->right);

        //     q2.push(t2->left);
        //     q2.push(t2->right);
        // }
        // return true;
    }
};
