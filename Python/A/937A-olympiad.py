class Solver:
    def __init__(self):
        self.x = 0
        self.scores = set()

    def input(self):
        self.x = int(input())
        self.scores = set(map(int, input().split()))

    def answer(self):
        return len(self.scores) if 0 not in self.scores else len(self.scores)-1


solution = Solver()
solution.input()
print(solution.answer())
