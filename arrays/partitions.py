class Solution:
    def solve(self, A, B):
        arr_sum = sum(B)
        if arr_sum % 3 != 0: return 0
        arr_sum //= 3

        count = [0 for i in range(A)]
        cnt = 0
        s = 0
        for i in range(A-1, -1, -1):
            s += B[i]
            if s == arr_sum: cnt +=1
            count[i] = cnt

        ans = 0
        s = 0
        for i in range(A-2):
            s += B[i]
            if s == arr_sum: ans += count[i+2]

        return ans
