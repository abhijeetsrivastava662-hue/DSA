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
14    int count=0;
15    int ans=-1;
16    void inorder(TreeNode* root, int k){
17        if(root==NULL || count>=k){
18            return;
19        }
20        //left
21        inorder(root->left,k);
22
23        //curent or root
24        count++;
25        if(count==k){
26            ans=root->val;
27            return;
28        }
29        //right
30        inorder(root->right,k);
31    }
32    int kthSmallest(TreeNode* root, int k) {
33        inorder(root,k);
34        return ans;
35    }
36};