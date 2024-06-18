t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    total_cells_1x1 = x
    total_cells_2x2 = y * 4
    total_screens = (total_cells_1x1 + total_cells_2x2 + 14) // 15
    print(total_screens)
