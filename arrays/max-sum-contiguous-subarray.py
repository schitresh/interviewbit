class Solution:
    def maxSubArray(self, A):
        cur = -sys.maxsize
        maxi = cur
        for x in A:
            cur = max(cur+x, x)
            maxi = max(maxi, cur)
        return maxi
