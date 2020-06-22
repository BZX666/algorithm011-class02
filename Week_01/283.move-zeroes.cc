class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int id = 0;
        int len = nums.size();
        for (auto i : nums) {
            if (i) {
                nums[id++] = i;
            }
        }

        for (int i = id; i < len ; i++) {
            nums[i] = 0;
        }
    }
};
