moves = 0
matrix = [[0 for _ in range(5)] for _ in range(5)]
for i in range(5):
    row = list(map(int, input().split()))
    matrix[i] = row
    if 1 in row:
        row_index = i
        col_index = row.index(1)

if 'row_index' in locals() and 'col_index' in locals():
    moves = abs(row_index - 2) + abs(col_index - 2)

print(moves)
