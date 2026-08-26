1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root==NULL||root==p||root==q){
14            return root;
15        }
16        TreeNode* left= lowestCommonAncestor(root->left,p,q);
17        TreeNode* right= lowestCommonAncestor(root->right,p,q);
18
19        if(left==NULL) return right;
20        else if(right==NULL) return left;
21        else{//means p and q is find
22            return root;
23        }
24
25        
26    }
27};