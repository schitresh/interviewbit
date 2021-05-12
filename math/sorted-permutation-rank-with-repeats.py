from math import factorial
from collections import defaultdict

class Solution:
    def findRank(self, A):
        mod = 10 ** 6 + 3
        rank = 1

        for i in range(len(A)):
            count = 0
            freq = defaultdict(int)
            freq[A[i]] += 1

            for j in range(i+1, len(A)):
                if A[i] > A[j]: count += 1
                freq[A[j]] += 1

            ways = factorial(len(A)-i-1) % mod;
            ways = (ways * count) % mod;

            for key, value in freq.items():
                duplicate_ways = factorial(value)
                ways = ((ways % mod) * (pow(duplicate_ways, mod-2, mod))) % mod

            rank = (rank + ways) % mod

        return rank

