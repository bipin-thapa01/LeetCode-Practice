class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k>=nums.size()){
            k = nums.size()-1;
        }
        for(int i = 0; i < k; i++){
            for(int j = 0; j < nums.size()-i-1; j++){
                if(nums[j] == nums[j+i+1]){
                    return true;
                }
            }
        }
        return false;
    }
};
