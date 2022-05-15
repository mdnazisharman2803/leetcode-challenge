class Solution {
public:
   bool CheckArithmetic(vector<int> &temp)
   {
    int pd = temp[1] - temp[0];
    for (int i = 1; i < temp.size() - 1; i++)
    {
        int cd = temp[i + 1] - temp[i];
        if (pd != cd)
            return false;
    }
    return true;
}

vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
{  vector<bool> ans;
    for (int i = 0; i < l.size(); i++)
    {     int s = l[i];
          int e = r[i];
        vector<int> temp;
        for (int j = s; j <= e; j++)
            temp.push_back(nums[j]);
        sort(temp.begin(), temp.end());
        if (CheckArithmetic(temp))
            ans.push_back(true);
        else
            ans.push_back(false);
    }
    return ans;
}
};