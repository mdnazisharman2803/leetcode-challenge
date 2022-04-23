class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
vector<vector<int>>v;
int n=nums.size();
int sum=0;
sort(nums.begin(),nums.end());
for(int i=0;i<n-2;i++)
{
if(i==0||nums[i]!=nums[i-1])
{
int j=i+1;
int k=n-1;
while(j<k)
{
sum=nums[i]+nums[j]+nums[k];
if(sum==0)
{
v.push_back({nums[i],nums[j],nums[k]});
while(j<k&&nums[j]==nums[j+1])
j++;
while(j<k&&nums[k]==nums[k-1])
k--;

                j++;
                k--;
            }
            else if(sum>0)
                k--;
            else
                j++;
        }
        }
    }
    return v;
    
    }
};