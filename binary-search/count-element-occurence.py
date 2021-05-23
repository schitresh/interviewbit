class Solution:
    def binary_search(self, A, key, left=True):
        low = 0
        high = len(A) - 1
        result = -1

        while low <= high:
            mid = low + (high - low)/2
            if A[mid] == key:
                result = mid
                if left:
                    high = mid - 1
                else:
                    low = mid + 1
            elif A[mid] > key: high = mid - 1
            else: low = mid + 1

        return result

    def findCount(self, A, B):
        left = self.binary_search(A, B)
        right = self.binary_search(A, B, False)
        if left == -1: return 0

        return right - left + 1

