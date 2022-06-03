class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
       if(n<3)
{
return false;
}
int i=0;
int j=n-1;
while(j>i)
{
if(arr[j]<arr[j-1] || arr[i]<arr[i+1])
{
if(arr[j]<arr[j-1])
{
j--;
}

        else if(arr[i]<arr[i+1])
        {
            i++;
        }
    }
    else
    {
        break;
    }
    }
    if(i==j && i!=n-1 && j!=0)
    {
        return true;
    }
    return false;
    }
};