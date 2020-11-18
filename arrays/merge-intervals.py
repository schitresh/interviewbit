# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    def insert(self, intervals, new_interval):
        left = 0; right = len(intervals)-1
        start = new_interval.start; end = new_interval.end

        while left < len(intervals):
            if start <= intervals[left].end:
                start = min(start, intervals[left].start)
                break
            left += 1

        while right >= left:
            if intervals[right].start <= new_interval.end:
                end = max(end, intervals[right].end)
                break
            right -= 1

        return intervals[:left] + [Interval(start, end)] + intervals[right+1:]

