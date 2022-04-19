class Solution {
public:
   void Permute(vector<vector<int>> &res , vector<int> &nums,int i){
			if(i==nums.size()){
				res.push_back(nums);
				return;
			}
		for(int j=i;j<nums.size();j++){
		   swap(nums[i],nums[j]);
		   Permute(res,nums,i+1);
		   swap(nums[i],nums[j]);
		}
			return;
		}
		vector<vector<int>> permute(vector<int>& nums) {
			vector<vector<int>> res;
			Permute(res,nums,0);
			return res;
		}
};