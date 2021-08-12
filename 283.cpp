// TODO : Move zeroes to the beginning

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        for(int i=0; i<n; ++i) {
            if(nums[i] != 0)
                swap(nums[i], nums[index++]);
        }
    }
};
