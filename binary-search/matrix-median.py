class Solution:
    def binary_search(self, A, key):
        low = 0
        high = len(A) - 1

        while low <= high:
            mid = low + (high - low) // 2
            if A[mid] <= key: low = mid + 1
            else: high = mid - 1

        return low

    def findMedian(self, A):
        n = len(A)
        m = len(A[0])
        median_count = (n * m + 1) // 2

        low = 10 ** 9
        high = 0
        for i in A:
            low = min(low, i[0])
            high = max(high, i[m-1])

        while low < high:
            mid = low + (high - low) // 2
            count = 0

            for i in A:
                count += self.binary_search(i, mid)

            if count < median_count: low = mid + 1
            else: high = mid

        return low



