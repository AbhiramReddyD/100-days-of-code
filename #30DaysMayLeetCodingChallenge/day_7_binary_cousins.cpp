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
    bool isCousins(TreeNode* root, int x, int y) {
        int dx = depth(root,x,0), dy = depth(root,y,0);
if(dx!=dy) return false;
int px = parent(root,x), py = parent(root,y);
return px==py ? false : true;
}
int parent(TreeNode* node,int n){
if(node==NULL) return -1;
else if((node->left!=NULL && node->left->val==n) || (node->right!=NULL && node->right->val==n)) return node->val;
else return max(parent(node->left,n),parent(node->right,n));
}
int depth(TreeNode* node,int n,int d){
if(node==NULL) return 0;
else if(node->val==n) return d;
else return max(depth(node->left,n,d+1),depth(node->right,n,d+1));
    }
};