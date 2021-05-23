class Solution:
    def row_search(self, A, B):
        low = 0
        high = len(A) - 1

        while low <= high:
            mid = low + (high - low)//2

            if A[mid][0] > B: high = mid - 1
            else: low = mid + 1

        return low - 1

    def col_search(self, A, B, row):
        low = 0
        high = len(A[row]) - 1

        while low <= high:
            mid = low + (high - low)//2

            if A[row][mid] == B: return mid
            elif A[row][mid] < B: low = mid + 1
            else: high = mid - 1

        return -1

    def searchMatrix(self, A, B):
        row = self.row_search(A, B)
        col = self.col_search(A, B, row)

        return 0 if col == -1 else 1

