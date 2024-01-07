class Solver:
    def __init__(self):
        self.n = 0
        self.numbers = []

    def input(self):
        self.n = int(input())
        self.numbers = list(map(int, input().split()))

    def min_diff_indices(self):
        min_diff = float("inf")
        min_indices = (0, 0)
        for i in range(1, self.n):
            diff = abs(self.numbers[i] - self.numbers[i - 1])
            if diff < min_diff:
                min_diff = diff
                min_indices = (i, i + 1)
        last_diff = abs(self.numbers[self.n - 1] - self.numbers[0])
        if last_diff < min_diff:
            min_diff = last_diff
            min_indices = (1, self.n)
        return min_indices


solution = Solver()
solution.input()
result = solution.min_diff_indices()
print(*result)
