class Solution:
    def rotate(self, A):
        i = 0; j = 0
        x = len(A)-1; y = len(A)-1

        while i < len(A)/2:
            k = 0
            while k < x-i:
                temp = A[i][j+k]
                A[i][j+k] = A[x-k][j]
                A[x-k][j] = A[x][y-k]
                A[x][y-k] = A[i+k][y]
                A[i+k][y] = temp
                k+=1
            i+=1; j+=1
            x-=1; y-=1

        return A

