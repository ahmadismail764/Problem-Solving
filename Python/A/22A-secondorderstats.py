class Solver:
    def __init__(self):
        self.n = 0
        self.values = set()

    def input(self):
        self.n = int(input())
        self.values = set(map(int, input().split()))
        self.values = sorted(self.values)

    def answer(self):
        return "NO" if len(self.values) == 1 else list(self.values)[1]


solution = Solver()
solution.input()
print(solution.answer())
