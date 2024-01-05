class Solver:
    def __init__(self):
        self.board_size = 0
        self.board = []

    def input_board(self):
        self.board_size = int(input())
        for _ in range(self.board_size):
            x = input()
            self.board.append(x)

    def is_diagonal(self):
        if not self.board or len(self.board) != len(self.board[0]):
            return False
        diagonal_char = self.board[0][0]
        for i in range(self.board_size):
            if self.board[i][i] != diagonal_char:
                return False
        for i in range(self.board_size):
            if self.board[i][self.board_size - 1 - i] != diagonal_char:
                return False
        for i in range(self.board_size):
            for j in range(self.board_size):
                if (i != j and i + j != self.board_size - 1 and
                        (self.board[i][j] != self.board[0][1] or self.board[i][j] == diagonal_char)):
                    return False
        return True


obj = Solver()
obj.input_board()
print("YES" if obj.is_diagonal() else "NO")
