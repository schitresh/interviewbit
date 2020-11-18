class Solution:
    def trailingZeroes(self, A):
        count = 0
        power = 5
        while power <= A:
            count += A//power
            power *= 5

        return count

