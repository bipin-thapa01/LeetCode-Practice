class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int container = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (container == nums[i]) {
                nums.erase(nums.begin()+i);
                i--;
            }
            else{
                k++;
                container = nums[i];
            }
        }
        return k;
    }
};
