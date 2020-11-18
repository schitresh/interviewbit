class Solution:
    def hammingDistance(self, A):
        ans = 0
        for i in range(32):
            count_one = 0
            for x in A:
                if x & 1<<i: count_one += 1

            count_zero = len(A) - count_one
            ans += (count_one * count_zero * 2) % (10**9+7)

        return ans % (10**9+7)

