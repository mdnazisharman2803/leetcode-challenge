class MyStack {
public:
    MyStack() {
  
}
queue<int> q;

void push(int x) {
    q.push(x);
}

int pop() {
    
        int temp=q.front();
        q.pop();
        q.push(temp);
        
        int num=q.front();
        q.pop();
        while(q.front()!=temp and !q.empty()){
            q.push(num);
            num=q.front();
            q.pop();
        }
        return num;
    
}

int top() {
  
      
    int num=pop();
    q.push(num);
    return num;
    
}

bool empty() {
    return q.empty();
}
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */