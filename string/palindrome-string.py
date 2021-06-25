class Solution:
    def isPalindrome(self, A):
        low = 0
        high = len(A) - 1

        while low < high:
            if not A[low].isalnum(): low += 1
            elif not A[high].isalnum(): high -= 1
            else:
                if A[low].lower() != A[high].lower(): return 0
                low += 1
                high -= 1

        return 1
