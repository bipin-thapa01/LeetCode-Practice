class Solution:
    def myAtoi(self, s: str) -> int:
        isEmpty = True
        isNegative = False
        myInt = 0
        flag = 0
        for i in s:
            if (65 <= ord(i) <= 90) or (97 <= ord(i) <= 122) or i == '.':
                break
            elif not(48 <= ord(i) <= 57):
                if isEmpty:
                    if flag:
                        break
                    if i == '-' or i == '+':
                        flag = 1
                    if i == '-':
                        isNegative = True
                    continue
                else:
                    break
            else:
                myInt = myInt*10 + int(i)
                if isEmpty: 
                    isEmpty = False
        if isNegative:
            myInt *= -1
        if -2 ** 31 > myInt or myInt > 2 ** 31 - 1:
            myInt = 2**31 - 1
            if isNegative:
                myInt = -2 ** 31
        return myInt