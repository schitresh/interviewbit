class Solution:
    def plusOne(self, A):
        c = 1
        while len(A) and A[0]==0: A.pop(0)
        for i in range(len(A)-1, -1, -1):
            add = A[i] + c
            A[i] = int(add%10)
            c = int(add/10)
        if c==1: A.insert(0, c)
        return A
