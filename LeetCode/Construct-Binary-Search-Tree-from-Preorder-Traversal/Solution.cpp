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
14    TreeNode* insert(TreeNode* root,int val){
15        if(root==nullptr){
16            return new TreeNode(val);
17        }
18        if(val<root->val){
19            root->left=insert(root->left,val);
20        }
21        else{
22            root->right=insert(root->right,val);
23        }
24        return root;
25
26    }
27    TreeNode* bstFromPreorder(vector<int>& preorder) {
28        TreeNode* root=nullptr;
29        for(int val:preorder){
30            root=insert(root,val);
31        }
32        return root;
33    }
34};