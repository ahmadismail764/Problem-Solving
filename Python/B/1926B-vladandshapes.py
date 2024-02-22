t = int(input())

for _ in range(t):
    n = int(input())
    grid = [input() for _ in range(n)]
    min_row, max_row, min_col, max_col = n, -1, n, -1
    for i in range(n):
        for j in range(n):
            if grid[i][j] == "1":
                min_row = min(min_row, i)
                max_row = max(max_row, i)
                min_col = min(min_col, j)
                max_col = max(max_col, j)
    print("SQUARE" if max_row - min_row == max_col - min_col else "TRIANGLE")
