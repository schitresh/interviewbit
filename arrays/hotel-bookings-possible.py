class Solution:
    def hotel(self, arrive, depart, K):
        time = list(map(lambda x: x*(-1), depart)) + arrive
        time.sort(key = lambda x: abs(x))
        count = K

        for x in time:
            if x >= 0:
                count -= 1
                if count < 0: return 0
            else: count += 1

        return 1
