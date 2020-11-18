class Solution:
    primes = [False, False]

    def cal_primes(self, A):
        length = len(self.primes)
        self.primes += [True]*(A-length)

        for i in range(2, int(A**0.5)+1):
            if self.primes[i] == True:
                for j in range((length//i)*i, A, i):
                    if i == j: continue
                    self.primes[j] = False

    def primesum(self, A):
        if len(self.primes) < A: self.cal_primes(A)

        for i in range(2, len(self.primes)//2 + 1):
            if self.primes[i]:
                if self.primes[A-i]: return [i, A-i]

