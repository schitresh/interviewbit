class Solution:
    def findPerm(self, S, N):
        n = []
        left = 1; right = N

        for x in S:
            if x == 'D':
                n.append(right)
                right -= 1
            else:
                n.append(left)
                left += 1

        n.append(left)
        return n
