rows, cols = map(int, input().split())
grid = []
for _ in range(rows):
    x = list(input())
    grid.append(x)

can_protect = True
for i in range(rows):
    for j in range(cols):
        if i == 0 and j > 0 and ((grid[i][j] == 'S' and grid[i][j - 1] == 'W') or (grid[i][j] == 'W' and grid[i][j - 1] == 'S')):
            can_protect = False
        elif j == 0 and i > 0 and ((grid[i][j] == 'S' and grid[i - 1][j] == 'W') or (grid[i][j] == 'W' and grid[i - 1][j] == 'S')):
            can_protect = False
        elif j > 0 and (grid[i][j] == 'S' and (grid[i][j - 1] == 'W' or grid[i - 1][j] == 'W')) or (grid[i][j] == 'W' and (grid[i][j - 1] == 'S' or grid[i - 1][j] == 'S')):
            can_protect = False
        if grid[i][j] == '.':
            grid[i][j] = 'D'

if not can_protect:
    print("No")
else:
    print("Yes")
    for row in grid:
        print(''.join(row))
