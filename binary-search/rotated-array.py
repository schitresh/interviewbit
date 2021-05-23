class Solution:
    def findMin(self, A):
        low = 0
        high = len(A) - 1

        while A[low] > A[high]:
            mid = low + (high - low)//2

            if A[mid] < A[high]:
                high = mid
            else:
                low = mid + 1

        return A[low]

