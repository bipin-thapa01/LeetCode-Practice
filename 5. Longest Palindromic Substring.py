class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s) == 1:
            return s
        else:
            for i in range(1,len(s)+1):
                for j in range(0,len(s)-i+1):
                    if s[j:j+i][::-1] == s[j:j+i]:
                        longestPalindrome = s[j:j+i]
            return longestPalindrome