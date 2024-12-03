 class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        double countZero = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                if(countZero == nums.size()-i){
                    return;
                }
                for(int j = i+1; j<nums.size(); j++){
                    nums[j-1] = nums[j];
                }
                nums[nums.size()-1] = 0;
                countZero++;
                if(nums[i] == 0){
                    i--;
                }
            }
        }
    }
};
