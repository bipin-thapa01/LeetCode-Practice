class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0;
        double length = 0;
        for(double i = s.length()-1;i>=0;i--){
            if(s[i]==' '&&flag==0){
                continue;
            }
            else if(s[i]==' '&&flag==1){
                break;
            }
            else{
                length++;
                flag = 1;
            }
        }
        return length;
    }
};