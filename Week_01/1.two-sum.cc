class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int cur = nums[i];
            int need = target - cur;
            if (map.count(need)) {
                res = {map[need], i};
                break;
            } else {
                map[cur] = i;
            }
        }
        return res;
    }
};
