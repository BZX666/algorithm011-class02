class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ml = 0;
        int mr = 0;
        int res = 0;
        while (l < r) {
            if (height[l] <= height[r]) {
                if (ml <= height[l]) {
                    ml = height[l];
                } else {
                    res += ml - height[l];
                }
                l++;
            } else {
                if (mr <= height[r]) {
                    mr = height[r];
                } else {
                    res += mr - height[r];
                }
                r--;
            }
        }
        return res;
    }
};
