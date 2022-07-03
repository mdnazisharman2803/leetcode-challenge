class Solution {
public:
    int M = 1e9 + 7;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());

    horizontalCuts.insert(horizontalCuts.begin(), 0);
    verticalCuts.insert(verticalCuts.begin(), 0);
    
    horizontalCuts.push_back(h);
    verticalCuts.push_back(w);
    
    int n1 = horizontalCuts.size(), n2 = verticalCuts.size();
    long long mx1 = 0, mx2 = 0;
    for(int i = 1; i < n1; i++)
        mx1 = max(mx1, (long long) horizontalCuts[i] - horizontalCuts[i - 1]);
    
    for(int i = 1; i < n2; i++)
        mx2 = max(mx2, (long long) verticalCuts[i] - verticalCuts[i - 1]);
    return (mx1 * mx2) % M;
    }
};