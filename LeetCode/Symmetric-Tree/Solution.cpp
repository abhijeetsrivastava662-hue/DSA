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
14    bool checkSymm(TreeNode* left,TreeNode* right){
15        if(left==NULL||right==NULL){
16            return left==right;
17        }
18        if(left->val!=right->val) return false;
19
20        return checkSymm(left->left,right->right)
21               &&
22            checkSymm(left->right,right->left);
23    }
24public:
25    bool isSymmetric(TreeNode* root) {
26        return root==NULL || checkSymm(root->left,root->right);
27        
28    }
29};