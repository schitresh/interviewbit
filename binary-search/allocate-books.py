class Solution:
    def allocate(self, A, B, pages):
        students_required = 1
        current_pages = 0

        for i in A:
            current_pages += i

            if current_pages > pages:
                students_required += 1
                current_pages = i
                if students_required > B: return False

        return True

    def books(self, A, B):
        if len(A) < B: return -1

        low = max(A)
        high = sum(A)
        min_max_pages = high

        while low <= high:
            mid = low + (high - low) // 2

            if self.allocate(A, B, mid):
                min_max_pages = mid
                high = mid - 1
            else:
                low = mid + 1

        return min_max_pages


