# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    def merge(self, intervals):
        intervals.sort(key = lambda x: x.start)

        i = 0
        while i < len(intervals)-1:
            first = intervals[i]
            second = intervals[i+1]

            if second.start <= first.end:
                first.end = max(first.end, second.end)
                del intervals[i+1]
            else:
                i += 1

        return intervals


