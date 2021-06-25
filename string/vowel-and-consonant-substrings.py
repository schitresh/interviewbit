class Solution:
    def solve(self, A):
        mod = 10 ** 9 + 7
        count = 0
        vowels = 0
        consonants = 0

        for i in range(len(A)):
            if A[i] in 'aeiou':
                vowels += 1
                count = (count + consonants) % mod
            else:
                consonants += 1
                count = (count + vowels) % mod

        return count

# OR

class Solution:
    def solve(self, A):
        vowels = 0

        for i in range(len(A)):
            if A[i] in 'aeiou':
                vowels += 1

        return vowels * (len(A) - vowels) % (10 ** 9 + 7)

