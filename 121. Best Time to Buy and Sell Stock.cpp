class Solution {
public:
    int maxProfit(vector<int>& prices) {
        double greatest = 0;
        double largest = prices[prices.size()-1];
        double diff = 0;
        for(int j = prices.size()-2; j>= 0;j--){
            diff = largest - prices[j];
            if(diff>greatest){
                greatest = diff;
            }
            if(largest < prices[j]){
                largest = prices[j];
            }
        }
        return greatest;
    }
};
