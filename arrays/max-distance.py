class Solution:
    def maximumGap(self, A):
        A = list(zip(A, range(len(A))))
        A.sort()
        l = sys.maxsize
        ans = 0

        for x in A:
            l = min(l, x[1])
            ans = max(ans, x[1]-l)

        return ans

#Alternate

class Solution:
    def maximumGap(self, A):
        maxA = [0]*len(A)
        maxA[len(A)-1] = A[len(A)-1]
        for i in range(len(A)-2, -1, -1): maxA[i] = max(A[i], maxA[i+1])

        i = 0; j = 0; ans = 0
        while i < len(A) and j < len(A):
            if A[i] <= maxA[j]:
                ans = max(ans, j-i)
                j+=1
            else: i+=1

        return ans;
