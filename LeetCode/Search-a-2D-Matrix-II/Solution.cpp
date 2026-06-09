1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int row = matrix.size();
5        int col = matrix[0].size();
6        int rowIndex=0;
7        int colIndex=col-1;
8
9        while(rowIndex<row && colIndex>=0){
10            int element = matrix[rowIndex][colIndex];
11
12            if(element==target){
13                return 1;
14            }
15            if(element<target){
16                rowIndex++;
17            }else{
18                colIndex--;
19            }
20        }
21    return 0;    
22    }
23};