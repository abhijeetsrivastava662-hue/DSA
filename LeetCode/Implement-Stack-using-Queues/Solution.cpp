1class MyStack {
2public:
3    MyStack() {
4        
5    }
6    queue<int> q;
7    
8    void push(int x) {
9        q.push(x);
10        for(int i=0;i<q.size()-1;i++){
11            q.push(q.front());
12            q.pop();
13        }
14    }
15    
16    int pop() {
17        int ans=q.front();
18        q.pop();
19        return ans;
20    }
21    
22    int top() {
23        return q.front();
24    }
25    
26    bool empty() {
27        return q.empty();
28    }
29};
30
31/**
32 * Your MyStack object will be instantiated and called as such:
33 * MyStack* obj = new MyStack();
34 * obj->push(x);
35 * int param_2 = obj->pop();
36 * int param_3 = obj->top();
37 * bool param_4 = obj->empty();
38 */