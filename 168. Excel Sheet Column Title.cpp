class Solution {
public:
    string convertToTitle(int columnNumber) {
        columnNumber -=1;
        double q = columnNumber/26;
        int r = columnNumber%26;
        string ans;
        if(q>=1){
            ans = convertToTitle(q);
            ans += string(1,'A'+r);
            return ans;
        }
        else{
            return string(1,'A'+r);
        }
    }
};
