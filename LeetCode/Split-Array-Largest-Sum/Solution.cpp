1class Solution {
2public:
3
4int countPages(vector<int>& arr,int pages){
5    int stud=1;
6    long long pagesStudent =0;
7    for(int i=0;i<arr.size();i++){
8        if(pagesStudent+arr[i] <= pages){
9            pagesStudent += arr[i];
10        }else{
11            stud += 1;;
12            pagesStudent=arr[i];
13        }
14    }
15    return stud;
16}
17int findPages(vector<int>& arr, int n, int m) {
18    if(m>n) return -1; //edge case
19    int low= *max_element(arr.begin(),arr.end());
20    int high = accumulate(arr.begin(),arr.end(),0);
21    while(low<=high){
22        int mid=(low+high)/2;
23        int student=countPages(arr,mid);
24        if(student>m){
25            low=mid+1;
26        }else{
27            high=mid-1;
28        }
29    }
30    return low;
31   
32}
33    int splitArray(vector<int>& nums, int k) {
34        return findPages(nums,nums.size(),k);
35        
36    }
37};//same as book allocation problem