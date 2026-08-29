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
14    TreeNode* deleteNode(TreeNode* root, int key) {
15        if(root==NULL) return NULL;
16        if(root->val==key){
17            return helper(root);
18        }
19        TreeNode* dummy=root;
20        while(root!=NULL){
21            if(root->val>key){
22                if(root->left!=NULL && root->left->val==key){
23                    root->left=helper(root->left);
24                    break;
25                }else{
26                    root=root->left;
27                }
28            }else{
29                if(root->right!=NULL && root->right->val==key){
30                    root->right=helper(root->right);
31                    break;
32                }else{
33                    root=root->right;
34                }
35            }
36        }
37        return dummy;
38        
39    }
40    TreeNode* helper(TreeNode* root){
41        if(root->left==NULL){
42            return root->right;
43        }
44        if(root->right==NULL){
45            return root->left;
46        }
47        TreeNode* rightChild=root->right;
48        TreeNode* lastChild=findLastChild(root->left);
49        lastChild->right=rightChild;
50        return root ->left;
51    }
52    TreeNode* findLastChild(TreeNode* root){
53          if(root->right==NULL){
54            return root;
55          }  
56          return findLastChild(root->right);
57    }
58};