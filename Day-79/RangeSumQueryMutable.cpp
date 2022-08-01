class BIT { 
    vector<int> bit;
public:
    BIT(int size=0) {
        bit.assign(size + 1, 0);
    }
    int getSum(int idx) { 
        int sum = 0;
        for (; idx > 0; idx -= idx & (-idx))
            sum += bit[idx];
        return sum;
    }
    void addValue(int idx, int val) {
        for (; idx < bit.size(); idx += idx & (-idx))
            bit[idx] += val;
    }
};
class NumArray {
    BIT bit;
    vector<int> nums;
public:
    NumArray(vector<int>& nums) {
        this->bit = BIT(nums.size());
        this->nums = nums;
        for (int i = 0; i < nums.size(); ++i)
            bit.addValue(i+1, nums[i]);
    }
    void update(int index, int val) {
        int diff = val - nums[index]; 
        bit.addValue(index + 1, diff); 
        nums[index] = val; 
    }
    int sumRange(int left, int right) {
        return bit.getSum(right+1) - bit.getSum(left);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */