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
14    int dfs(TreeNode* node,int &maxi){
15        if(node==NULL) return 0;
16        
17
18        int leftSum=max(0,dfs(node->left,maxi));
19        int rightSum=max(0,dfs(node->right,maxi));
20        maxi=max(maxi,node->val+leftSum+rightSum);
21        return max(leftSum,rightSum)+node->val;
22    }
23public:
24    int maxPathSum(TreeNode* root) {
25        int maxi=INT_MIN;
26        dfs(root,maxi);
27        return maxi;
28        
29    }
30};