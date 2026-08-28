1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11    void markParents(TreeNode* root,unordered_map<TreeNode*, TreeNode*> &parent_track,TreeNode* target){
12        queue<TreeNode* >queue;
13        queue.push(root);
14        while(!queue.empty()){
15            TreeNode* current=queue.front();
16            queue.pop();
17            if(current->left){
18                parent_track[current->left]=current;
19                queue.push(current->left);
20            }
21            if(current->right){
22                parent_track[current->right]=current;
23                queue.push(current->right);
24            }
25        }
26    }
27public:
28    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
29        unordered_map<TreeNode*, TreeNode*>parent_track;
30        markParents(root,parent_track,target);
31
32        unordered_map<TreeNode* , bool> visited;
33       queue<TreeNode* >queue;
34       queue.push(target);
35       visited[target]=true;
36       int curr_level=0;
37       while(!queue.empty()){
38        //second BFSto go upto K level from target node and using our hash table info 
39        int s=queue.size();
40        if(curr_level++==k) break;
41        for(int i=0;i<s;i++){
42            TreeNode* current=queue.front();
43            queue.pop();
44            if(current->left && !visited[current->left]){
45                queue.push(current->left);
46                visited[current->left]=true;
47            }
48            if(current->right && !visited[current->right]){
49                queue.push(current->right);
50                visited[current->right]=true;
51            }
52            if(parent_track[current] && !visited[parent_track[current]]){
53                queue.push(parent_track[current]);
54                visited[parent_track[current]]=true;
55            }
56
57        }
58       }
59       vector<int> ans;
60       while(!queue.empty()){
61            TreeNode* current=queue.front();
62            queue.pop();
63            ans.push_back(current->val);
64       }
65       return ans;
66    }
67};