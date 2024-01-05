class Solver:
    def __init__(self):
        self.no_teams = 0
        self.teams = []

    def input(self):
        self.no_teams = int(input())
        self.teams = list(map(int, input().split()))

    def answer(self):
        cnt1, cnt2 = self.teams.count(1), self.teams.count(2)
        return cnt2 + (cnt1-cnt2)//3 if cnt1 > cnt2 else cnt1


solution = Solver()
solution.input()
print(solution.answer())
