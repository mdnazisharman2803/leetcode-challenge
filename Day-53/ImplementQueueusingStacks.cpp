class MyQueue {

public:
    
stack<int> mainQ;
stack<int> helperQ;    
    
MyQueue() {

}

  int size() {
   return mainQ.size();
  }

void push(int x) {
    mainQ.push(x);
}

int pop() {
    while(!mainQ.empty()){
    helperQ.push(mainQ.top());
    mainQ.pop();}
    
    int x=helperQ.top();
    
    helperQ.pop();
    
    while(!helperQ.empty()){
        mainQ.push(helperQ.top());
        helperQ.pop();
    }
    
    return x;
    
}

int peek() {
   while(!mainQ.empty()){
    helperQ.push(mainQ.top());
    mainQ.pop();}
    
    int x=helperQ.top();
    
    while(!helperQ.empty()){
        mainQ.push(helperQ.top());
        helperQ.pop();
    }
    
    return x;
}

bool empty() {
   return (size()==0); 
}

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */