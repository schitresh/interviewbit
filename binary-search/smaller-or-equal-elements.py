class Solution:
    def solve(self, A, B):
        left = 0
        right = len(A) - 1

        while left <= right:
            mid = left + (right - left) // 2
            if A[mid] > B: right = mid - 1
            else: left = mid + 1

        return right + 1

