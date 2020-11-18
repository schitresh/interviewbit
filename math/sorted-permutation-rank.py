class Solution:
    def findRank(self, A):
        string = sorted(A)
        ans = 0
        for i in range(len(A)):
            ans += string.index(A[i]) * math.factorial(len(string)-1)
            string.remove(A[i])
            if not string: break

        return (ans + 1) % (10**6+3)

