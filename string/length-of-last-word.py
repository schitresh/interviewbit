class Solution:
    def lengthOfLastWord(self, A):
        length = 0
        for i in range(len(A) - 1, -1, -1):
            if A[i] == ' ':
                if length: return length
            else:
                length += 1

        return length

