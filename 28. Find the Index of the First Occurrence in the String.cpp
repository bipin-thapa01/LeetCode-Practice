class Solution {
public:
    int strStr(string haystack, string needle) {
        double size = needle.length();
        string substring = "";
        for(int i=0; i<=haystack.length()-size; i++){
            substring = haystack.substr(i,size);
            if(substring == needle){
                return i;
            }
        }
        return -1;
    }
};
