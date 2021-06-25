class Solution:
    def solve(self, A, B):
        low = 0
        high = max(A)
        ans = high

        while low <= high:
            mid = low + (high - low) // 2

            height = 0
            for i in A:
                if i > mid: height += (i - mid)

            if height >= B:
                ans = mid
                low = mid + 1
            else: high = mid - 1

        return ans

# OR

class Solution:
    def solve(self, A, B):
        A.sort()
        cheight = [A[0]]
        for i in range(1, len(A)):
            cheight.append(cheight[i-1] + A[i])

        low = 0
        high = len(A) - 1

        while low <= high:
            mid = low + (high - low) // 2
            height = cheight[-1] - cheight[mid]
            cdiff = height - (A[mid] * (len(A) - mid - 1))

            if cdiff < B: high = mid - 1
            else: low = mid + 1

        trees = len(A) - high - 1
        height = cheight[-1] - cheight[high]
        cdiff = height - (A[high] * trees)
        diff = cdiff - B

        distributed_diff = diff // trees
        return A[high] + distributed_diff
