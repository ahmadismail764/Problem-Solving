class Solver:
    def __init__(self):
        self.board = []

    def get_board(self):
        for _ in range(8):
            x = input()
            self.board.append(x)

    def validator(self):
        for row in self.board:
            if "BB" in row or "WW" in row:
                return False
        return True


Object = Solver()
Object.get_board()
print("YES" if Object.validator() else "NO")
