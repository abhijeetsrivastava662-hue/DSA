1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* insertIntoBST(TreeNode* root, int val) {
15        if(root==NULL) return new TreeNode(val);
16        TreeNode* curr= root;
17        while(true){
18            if(curr->val<=val){
19                if(curr->right!=NULL) curr=curr->right;
20                else {
21                    curr->right=new TreeNode(val);
22                    break;
23                }
24            }else{
25                if(curr->left!=NULL) curr=curr->left;
26                else {
27                    curr->left=new TreeNode(val);
28                    break;
29                }
30            }
31        }
32        return root;
33    }
34};