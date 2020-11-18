from functools import cmp_to_key

class Solution:
    def largestNumber(self, A):
        A = list(map(str, A))
        A = sorted(A, key = cmp_to_key(lambda x,y: -1 if x+y > y+x else 1))
        if A[0] == "0": return "0"
        return "".join(A)

