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
14    int diameterOfBinaryTree(TreeNode* root) {
15        int dia =0;
16        height(root,dia);
17        return dia;
18    }
19private:
20    int height(TreeNode* node,int &dia){
21        if(!node) return 0;
22
23        int lh = height(node->left,dia);
24        int rh = height(node->right,dia);
25        dia=max(dia,lh+rh);
26
27        return 1+max(rh,lh);
28    }
29};