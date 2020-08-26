class Solution:
    def subUnsort(self, A):
        L = sys.maxsize; R = -sys.maxsize
        for i in range(len(A)-1):
            if A[i] > A[i+1]:
                L = min(L, A[i+1])
                R = max(R, A[i])

        l = -1; r = -1
        for i in range(len(A)):
            if A[i] > L:
                l = i
                break

        for i in range(len(A)-1, -1, -1):
            if A[i] < R:
                r = i
                break

        if l==-1 or r==-1: return [-1]
        return [l, r]

