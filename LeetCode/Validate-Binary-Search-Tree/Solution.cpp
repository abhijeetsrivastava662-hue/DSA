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
13
14public:
15    void inorder(TreeNode* root, vector<int> &ans ){
16        if(root==NULL){
17            return;
18        }
19        inorder(root->left,ans);
20        ans.push_back(root->val);
21        inorder(root->right,ans);
22    }
23    bool isValidBST(TreeNode* root) {
24        vector<int> ans;
25        inorder(root,ans);
26        for(int i=1;i<ans.size();i++){
27            if(ans[i]<=ans[i-1]){
28                return false;
29            }
30        }
31        return true;
32    }
33};