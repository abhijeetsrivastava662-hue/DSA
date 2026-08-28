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
14    int countNodes(TreeNode* root) {
15        if(root==NULL) return 0;
16
17        int lh=findLeft(root);
18        int rh=findRight(root);
19
20        if(lh==rh) return (1<<lh)-1;//2^lh-1=maximum nodes of a perfect complete binary tree
21
22        return 1+ countNodes(root->left) + countNodes(root->right);
23        
24    }
25    int findLeft(TreeNode* node){
26        int height=0;
27        while(node){
28            height++;
29            node=node->left;
30        }
31        return height;
32    }
33    int findRight(TreeNode* node){
34        int height=0;
35        while(node){
36            height++;
37            node=node->right;
38        }
39        return height;
40    }
41};