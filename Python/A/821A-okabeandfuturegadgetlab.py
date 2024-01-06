class Solver:
    def __init__(self):
        self.dimension = 0
        self.lab = []

    def input_data(self):
        self.dimension = int(input())
        for _ in range(self.dimension):
            row = list(map(int, input().split()))
            self.lab.append(row)

    def lab_validator(self):
        for i in range(self.dimension):
            for j in range(self.dimension):
                if self.lab[i][j] == 1:
                    continue
                pass_flag = False
                for r in range(self.dimension):
                    if r == i:
                        continue
                    for c in range(self.dimension):
                        if c == j:
                            continue
                        _sum = self.lab[r][j] + self.lab[i][c]
                        if _sum == self.lab[i][j]:
                            pass_flag = True
                            break
                if not pass_flag:
                    return False
        return True


solution = Solver()
solution.input_data()
print("Yes" if solution.lab_validator() else "No")
