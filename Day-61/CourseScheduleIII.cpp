class Solution {
public:
    struct comparator{
      bool operator()(const vector<int>& v1, const vector<int>& v2) {
          return v1[1] < v2[1];
      } 
    };

    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), comparator());
        
        priority_queue<int> q;
        
        int sum = 0;
        for (auto& c : courses){
            int t = c[0];
            int d = c[1]; 
            
            q.push(t);
            sum += t;
            
            if (sum > d){
                sum -= q.top(); 
                q.pop();
            }

        }
        return q.size();
    }
};