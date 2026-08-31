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
14    vector<vector<int>> calculatePathSum(TreeNode* root, int targetSum,vector<int> &ds, vector<vector<int>> &ans){
15        int sum=0;
16        if(root==NULL){
17            return ans;
18        }
19        ds.push_back(root->val);
20        targetSum-=root->val;
21        if(!root->left && !root->right){
22            if(targetSum==0){
23                ans.push_back(ds);
24            }
25        }else{
26            calculatePathSum(root->left,targetSum,ds,ans);
27            calculatePathSum(root->right,targetSum,ds,ans);
28
29        }
30        ds.pop_back();   
31        return ans;
32        
33    }
34    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
35        vector<vector<int>> ans;
36        vector<int> ds;
37        calculatePathSum(root,targetSum,ds,ans);
38        return ans;
39        
40    }
41};