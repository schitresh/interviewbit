class Solution:
    def binary_search(self, A, B, left = True):
        low = 0
        high = len(A) - 1
        result = -1

        while low <= high:
            mid = low + (high - low) // 2
            if A[mid] == B:
                result = mid
                if left:
                    high = mid - 1
                else:
                    low = mid + 1
            elif A[mid] < B: low = mid + 1
            else: high = mid - 1

        return result

    def searchRange(self, A, B):
        left = self.binary_search(A, B)
        right = self.binary_search(A, B, False)
        return [left, right]


