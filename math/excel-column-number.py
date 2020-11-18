class Solution:
    def convert(self, char):
        k = ((ord(char) - ord('A') + 1) % 26)
        if k == 0: k = 26
        return k

    def titleToNumber(self, A):
        ans = 0
        for i in range(len(A)):
            ans += self.convert(A[i]) * (26 ** (len(A)-1 - i))

        return ans

