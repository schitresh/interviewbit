class Solution:
    pascal = [[1], [1, 1]]

    def build_triangle(self, pascal, A):
        while len(pascal) <= A:
            row = [1]
            for i in range(1, len(pascal[-1])):
                row.append(pascal[-1][i-1] + pascal[-1][i])
            row.append(1)
            pascal.append(row)

        return pascal[A]

    def getRow(self, A):
        return self.build_triangle(self.pascal, A)


