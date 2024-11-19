class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int arr[rowIndex+1][rowIndex+1];
        vector<int> temp(rowIndex+1);
        for(int i=0; i<=rowIndex; i++){
            for(int j=0; j<=i; j++){
                if(j==i||j==0){
                    arr[i][j] = 1;
                    if(i == rowIndex){
                        temp[j] = arr[i][j];
                    }
                }
                else{
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                    if(i == rowIndex){
                        temp[j] = arr[i][j];
                    }
                }
            }
        }
        return temp;
    }
};
