class Solution:
    def searchInsert(self, A, B):
        low = 0
        high = len(A) - 1

        while low <= high:
            mid = low + (high - low)//2

            if A[mid] == B: return mid
            elif A[mid] > B: high = mid - 1
            else: low = mid + 1

        return low

