def toggle_lights(grid, row, col):
    grid[row][col] ^= 1
    for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = row + di, col + dj
        if 0 <= ni < 3 and 0 <= nj < 3:
            grid[ni][nj] ^= 1


grid = [[1] * 3 for _ in range(3)]
for i in range(3):
    row_values = list(map(int, input().split()))
    for j in range(3):
        presses = row_values[j]
        for _ in range(presses % 2):
            toggle_lights(grid, i, j)

for row in grid:
    print("".join(map(str, row)))
