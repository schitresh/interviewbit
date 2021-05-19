class Solution:
    def solve(self, A, B, C):
        C = list(map(int, str(C)))
        a = len(A)
        c = len(C)

        if B > c or a == 0: return 0
        if B < c:
            first_digit = a
            if A[0] == 0 and B != 1: first_digit -= 1
            return first_digit * pow(a, B - 1)

        lower = [0] * (A[a-1] + 2)
        count = [0] * (B + 1)

        for i in A:
            lower[i + 1] = 1
        for i in range(len(lower) - 1):
            lower[i + 1] += lower[i]


        flag = True
        for i in range(c):
            count[i + 1] += count[i] * a

            digits = lower[C[i]] if C[i] <= A[a-1] else a

            if i == 0 and A[0] == 0 and B != 1:
                digits -= 1

            if flag:
                count[i + 1] += digits

            if C[i] <= A[a-1]:
                flag = flag & (lower[C[i] + 1] == lower[C[i]] + 1)
            else:
                flag = False

        return count[B]

