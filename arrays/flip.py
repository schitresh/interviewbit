class Solution:
    def flip(self, A):
        l = 0
        L = -1; R = -1

        max_count = 0
        cur = 0
        for i in range(len(A)):
            if A[i] == '1':
                cur -= 1
                if cur < 0:
                    cur = 0
                    l = i+1
            else:
                cur += 1
                if cur > max_count:
                    max_count = cur
                    L = l
                    R = i

        if L == -1: return []
        return [L+1, R+1]

