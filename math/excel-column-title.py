class Solution:
    def convert(self, x):
        if x == 0: return 'Z'
        return chr(x + ord('A') - 1)

    def convertToTitle(self, A):
        ans = ""
        while A:
            r = A % 26
            A //= 26
            ans = self.convert(r) + ans
            if r == 0: A -= 1

        return ans
