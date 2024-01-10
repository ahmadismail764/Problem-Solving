class Solver:
    def __init__(self):
        self.n, self.k = 0, 0
        self.problems = []

    def input(self):
        self.n, self.k = map(int, input().split())
        self.problems = list(map(int, input().split()))

    def answer(self):
        solvable = 0
        for i in range(self.n):
            if self.problems[i] > self.k:
                break
            solvable += 1
        for i in range(self.n):
            if self.problems[self.n - 1 - i] > self.k:
                break
            solvable += 1
        return min(self.n, solvable)


solution = Solver()
solution.input()
print(solution.answer())
