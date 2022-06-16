class MyCircularDeque {
public:
    queue<int> q;
    queue<int> q1;
    int a=1;
    MyCircularDeque(int k) {
        a=k;
    }
    bool insertFront(int value) {
        if(q.empty()){
            q.push(value);
            return true;
        }
        else if(q.size()==a)
            return false;
        else{
            while(q.size()>0){
                q1.push(q.front());
                q.pop();
            }
            q.push(value);
            while(q1.size()>0){
                q.push(q1.front());
                q1.pop();
            }
            return true;
        }
        return false;
    }
    bool insertLast(int value) {
        if(q.size()<a){
            q.push(value);
            return true;
        }
        return false;
    }
    bool deleteFront() {
        if(!q.empty()){
            q.pop();
            return true;
        }
        return false;
    }
    bool deleteLast() {
        if(q.size()==1){
            q.pop();
            return true;
        }
        else if(q.empty())
            return false;
        else{
            while(q.size()>1){
                q1.push(q.front());
                q.pop();
            }
            q.pop();
            while(q1.size()>0){
                q.push(q1.front());
                q1.pop();
            }
            return true;
        }
    }
    int getFront() {
        if(!q.empty())
            return q.front();
        return -1;
    }
    int getRear() {
        int n=0;
        if(q.empty())
            return -1;
        else if(q.size()==1)
            return q.front();
        else{
            while(q.size()>1){
                q1.push(q.front());
                q.pop();
            }
            n=q.front();
            q1.push(q.front());
            q.pop();
            while(q1.size()>0){
                q.push(q1.front());
                q1.pop();
            }
        return n;
        }
        return n;
    }
    bool isEmpty() {
        return (q.empty()&&q1.empty());
    }
    
    bool isFull() {
        if(q.size()+q1.size()==a)
            return true;
        return false;
    }
};



/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */