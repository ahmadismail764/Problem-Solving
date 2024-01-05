class Solver:
    def __init__(self):
        self.x = 0
        self.numbers = []

    def input(self):
        self.x = int(input())
        self.numbers = list(map(int, input().split()))

    def answer(self):
        self.numbers = sorted(self.numbers)
        return self.numbers[(self.x-1)//2]


solution = Solver()
solution.input()
print(solution.answer())
