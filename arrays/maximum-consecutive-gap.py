class Solution:
    def maximumGap(self, A):
        if len(A) < 2: return 0
        mn = min(A)
        mx = max(A)
        gap = (mx - mn)/(len(A)-1)
        if gap==0: return 0
        min_bucket = [sys.maxsize]*len(A)
        max_bucket = [-sys.maxsize]*len(A)

        for x in A:
            if x == mn: continue
            i = int((x-mn)//gap)
            min_bucket[i] = min(min_bucket[i], x)
            max_bucket[i] = max(max_bucket[i], x)

        max_gap = -sys.maxsize
        prev_max = mn
        for i in range(len(A)):
            if min_bucket[i] == sys.maxsize: continue
            cur = min_bucket[i] - prev_max
            max_gap = max(max_gap, cur)
            prev_max = max_bucket[i]

        return max_gap

