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
14    bool isBalanced(TreeNode* root) {
15        return dfsheight(root)!=-1;
16    }
17public:
18    int dfsheight(TreeNode* root){
19        if(root ==NULL) return 0;
20
21        int lh = dfsheight(root->left);
22        if(lh==-1) return -1;
23        int rh = dfsheight(root->right);
24        if(rh==-1) return -1;
25
26        if(abs(rh-lh)>1) return -1;
27        return 1+max(rh,lh);
28    }
29
30};