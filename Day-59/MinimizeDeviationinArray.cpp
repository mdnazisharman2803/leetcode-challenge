class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> q;
        int minimum = INT_MAX;
        for(int e:nums){
            if(e%2==1) {q.push(e*2); minimum=min(minimum, e*2);}
            else {q.push(e); minimum=min(minimum, e);}
        }
        
        int deviation=INT_MAX;
        while(q.top()%2==0){
            int top=q.top();
            deviation=min(top-minimum, deviation);
            q.pop();
            q.push(top/2);
            if(top/2<minimum) minimum=top/2;
        }
        
        return min(deviation,q.top()-minimum);
    }
};