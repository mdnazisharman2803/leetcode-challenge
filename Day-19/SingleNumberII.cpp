class Solution {
public:
    int singleNumber(vector<int>& nums) {
     unordered_map<int,int> map;
       
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        auto itr = map.begin();
        for(  itr;itr!=map.end();itr++){
            if((itr->second)==1)
                break;
        }
            return itr->first;
    }
};