class Solution:
    def solve(self, A):
        if A == 0: return []
        if A == 1: return [[1]]
        pascal = [[1],[1,1]]

        for i in range(3, A+1):
            row = [1]
            for j in range(1, len(pascal[-1])):
                row.append(pascal[-1][j-1] + pascal[-1][j])
            row.append(1)
            pascal.append(row)

        return pascal

