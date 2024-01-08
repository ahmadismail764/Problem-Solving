class Solver:
    def __init__(self):
        self.pages = 0
        self.week = []

    def input(self):
        self.pages = int(input())
        self.week = list(map(int, input().split()))

    def answer(self):
        self.i = 0
        while self.pages > 0:
            self.pages -= self.week[self.i % 7]
            self.i += 1
        return (self.i % 7) if (self.i % 7) else 7


solution = Solver()
solution.input()
print(solution.answer())
