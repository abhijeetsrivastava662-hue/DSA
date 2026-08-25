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
14    void riview(TreeNode* node,int level,vector<int> &ans){
15        if(node==NULL) return;
16
17        if(level==ans.size()) ans.push_back(node->val);
18        riview(node->right,level+1,ans);
19        riview(node->left,level+1,ans);
20    }
21public:
22    vector<int> rightSideView(TreeNode* root) {
23        vector<int> ans;
24        riview(root,0,ans);
25        return ans;
26
27        
28    }
29};