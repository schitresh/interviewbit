class Solution:
    def setZeroes(self, A):
        row0 = False
        col0 = False

        for i in range(len(A)):
            for j in range(len(A[0])):
                if A[i][j] == 0:
                    if i == 0: row0 = True
                    if j == 0: col0 = True
                    A[i][0] = 0
                    A[0][j] = 0

        for i in range(1, len(A)):
            if A[i][0] == 1: continue
            for j in range(0, len(A[0])):
                A[i][j] = 0

        for j in range(1, len(A[0])):
            if A[0][j] == 1: continue
            for i in range(0, len(A)):
                A[i][j] = 0

        if col0:
            for i in range(0, len(A)): A[i][0] = 0
        if row0:
            for j in range(0, len(A[0])): A[0][j] = 0

        return A

Alternate Solution:
class Solution:
    def setZeroes(self, A):
        rows = set()
        cols = set()

        for i in range(len(A)):
            for j in range(len(A[0])):
                if A[i][j] == 0:
                    rows.add(i)
                    cols.add(j)

        for i in range(1, len(A)):
            for j in range(0, len(A[0])):
                A[i][j] = 0

        for j in range(1, len(A[0])):
            for i in range(0, len(A)):
                A[i][j] = 0

        return A

