class Solution {
public:
    int evalRPN(vector<string>& tokens) {
           stack<int> evaluated;
        int ans = 0;
        for (auto x: tokens)
        {
            if (x == "+" or x == "*" or x == "-" or x == "/")
            {
                if (!evaluated.empty())
                {
                    int v1 = evaluated.top();
                    evaluated.pop();
                    int v2 = evaluated.top();
                    evaluated.pop();
                    if (x == "+")
                        ans = v2 + v1;
                    else if (x == "-")
                        ans = v2 - v1;
                    else if (x == "/")
                        ans = v2 / v1;
                    else if (x == "*")
                        ans = v2 * v1;
                    evaluated.push(ans);
                }
            }
            else
                evaluated.push(stoi(x));
        }
        return evaluated.top(); 
    }
};