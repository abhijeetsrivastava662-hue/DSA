1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if(root==NULL||root==p||root==q){
15            return root;
16        }
17        TreeNode* left= lowestCommonAncestor(root->left,p,q);
18        TreeNode* right= lowestCommonAncestor(root->right,p,q);
19
20        if(left==NULL) return right;
21        else if(right==NULL) return left;
22        else{//means p and q is find
23            return root;
24        }
25
26    }
27};