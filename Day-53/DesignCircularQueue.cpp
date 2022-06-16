class MyCircularQueue {
public:
    queue<int> q1;
    queue<int> q2;
    int s;
    MyCircularQueue(int k) {
        s=k;
    }
    bool enQueue(int value) {
        if(q1.size()+q2.size()<s){
            q1.push(value);
            return true;
        }
        return false;
    }
    bool deQueue() {
        if(!q1.empty()){
            q1.pop();
            return true;
        }
        return false;
    }
    int Front() {
        if(q1.empty()&&q2.empty())
            return -1;
        return q1.front();
    }
    int Rear() {
        if(q1.empty()&&q2.empty())
            return -1;
        int y;
        while(!q1.empty()){
            q2.push(q1.front());
            int x=q1.front();
            q1.pop();
            if(q1.empty())
                y=x;
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return y;
    }
    bool isEmpty() {
        return (q1.empty()&&q2.empty());
    }
    bool isFull() {
        if((q1.size()+q2.size())>=s)
            return true;
        return false;   
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */