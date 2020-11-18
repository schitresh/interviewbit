class Solution:
    def repeatedNumber(self, A):
        nby3 = len(A)/3
        a = 0; b = 0
        i = 0; j = 0

        for x in A:
            if x == a: i += 1
            elif x == b: j += 1
            elif i == 0: a = x; i = 1
            elif j == 0: b = x; j = 1
            else:
                i -= 1
                j -= 1

        i = 0; j = 0
        for x in A:
            if x == a: i += 1
            elif x == b: j+=1

        if i > nby3: return a
        if j > nby3: return b
        return -1


