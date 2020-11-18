class Solution:
    def repeatedNumber(self, A):
        list_n_sum = sum(A)
        list_sq_sum = sum(map(lambda x: x*x, A))

        n = len(A)
        n_sum = n*(n+1)/2
        sq_sum = n*(n+1)*(2*n+1)/6

        x = list_n_sum - n_sum # = a - b, where a is double & b is missing
        y = list_sq_sum - sq_sum # = a^2 - b^2

        a = (x + y/x)/2
        b = a - x

        return [a, b]

