class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int greatestArea = 0;
        while(left<right){
            if(greatestArea < min(height[left],height[right])*(right-left)){
                greatestArea = min(height[left],height[right])*(right-left);
            }
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return greatestArea;
    }
};
