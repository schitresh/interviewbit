class Solution:
    def coverPoints(self, A, B):
        dist = 0
        for i in range(len(A)-1):
            x = abs(A[i]-A[i+1])
            y = abs(B[i]-B[i+1])
            dist += max(x.y)
        return dist
