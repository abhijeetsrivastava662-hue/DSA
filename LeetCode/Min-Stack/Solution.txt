1class MinStack {
2public:
3   stack<pair<int,int> > st;
4
5 MinStack() {
6        
7    }
8    
9    void push(int val) {
10        if(st.empty()){
11            st.push({val,val});
12        }else st.push({val,min(val,st.top().second)});
13    }
14    
15    void pop() {
16        st.pop();
17    }
18    
19    int top() {
20        return st.top().first;
21    }
22    
23    int getMin() {
24        return st.top().second;
25    }
26};
27
28/**
29 * Your MinStack object will be instantiated and called as such:
30 * MinStack* obj = new MinStack();
31 * obj->push(value);
32 * obj->pop();
33 * int param_3 = obj->top();
34 * int param_4 = obj->getMin();
35 */