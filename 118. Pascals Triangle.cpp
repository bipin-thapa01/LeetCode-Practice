class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        int arr[numRows][numRows];
        for(int i = 0; i<numRows; i++){
            vector<int> temp(i+1);
            for(int j = 0; j<=i; j++){
                if(j==0||i==j){
                    arr[i][j] = 1;
                    temp[j] = 1;
                }
                else{
                    arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                    temp[j] = arr[i-1][j] + arr[i-1][j-1];
                }
            }
            pascalTriangle.push_back(temp);
        }
        return pascalTriangle;
    }
};
