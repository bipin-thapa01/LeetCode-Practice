class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int container = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
