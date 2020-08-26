class Solution:
    def diagonal(self, A):
        diags = (len(A)*2)-1
        antid = [[] for _ in range(diags)]

        for i in range(len(A)):
            for j in range(len(A)):
                antid[i+j].append(A[i][j])

        return antid
