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
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        vector<vector<int>> result;
16        if(root==NULL){
17            return result;
18        }
19        queue<TreeNode* > NodeQ;
20        NodeQ.push(root);
21        bool ltor=true;
22        while(!NodeQ.empty()){
23            int s=NodeQ.size();
24            vector<int> row(s);
25            for(int i=0;i<s;i++){
26                TreeNode* node=NodeQ.front();
27                NodeQ.pop();
28
29                int ind=(ltor) ? i : (s-1-i);
30
31                row[ind]=node->val;
32                if(node->left) NodeQ.push(node->left);
33                if(node->right) NodeQ.push(node->right);
34
35
36            }
37            ltor=!ltor;
38            result.push_back(row);
39        }
40        return result;
41        
42    }
43};