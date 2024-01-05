values = {'Q': 9, 'R': 5, 'B': 3, 'N': 3, 'P': 1}
board = ""
for _ in range(8):
    rank = input()
    board += rank

black, white = 0, 0
for s in board:
    if s.islower():
        black += values.get(s.upper(), 0)
    else:
        white += values.get(s, 0)

if white > black:
    print("White")
elif black > white:
    print("Black")
else:
    print("Draw")
