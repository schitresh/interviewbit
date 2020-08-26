class Solution:
    def generateMatrix(self, A):
        spiral = [[0]*A for i in range(A)]
        direction = ((0, 1), (1,0), (0, -1), (-1,0))

        k = 1; count = A
        i = 0; j = 0;
        while count > 0:
            spiral[i][j] = k

            for d in direction:
                x = count-1
                while x>0:
                    i += d[0]; j += d[1];
                    k += 1
                    x -= 1
                    if i==j and i < A/2: break
                    spiral[i][j] = k

            i += 1; j += 1
            count-=2
        return spiral

