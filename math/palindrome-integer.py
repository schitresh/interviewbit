class Solution:
    def isPalindrome(self, A):
        A = str(A)
        return int(A == A[::-1])

