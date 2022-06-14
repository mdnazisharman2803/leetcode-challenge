class MinStack {
public:
    stack<int> allData;
  stack<int> minData;


public:
  int size() {
      return allData.size();
  }

    MinStack() {
   
    }
    
    void push(int val) {
        allData.push(val);
   if(minData.size()==0 || val<=minData.top()){
       minData.push(val);
   }
    }
    
    void pop() {
       if(size()==0){
       
        return;
    }
    else{
        int val= allData.top();
        allData.pop();
        if(val==minData.top()){
          minData.pop();
        }  
        return;
        
        } 
    }
    
    int top() {
         if(size()==0){
        return 0;
    }
    else{
        return allData.top();
    }
    }
    
    int getMin() {
        if(size()==0){
   
        return 0;
    }
    else{
        return minData.top();
    }
  }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */