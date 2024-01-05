r, c = map(int, input().split())
cakecells = []
for i in range(r):
    row = input()
    cakecells.append(row)
rowstoeat = 0
for item in cakecells:
    rowstoeat += 1 if 'S' not in item else 0
columnstoeat = 0
for j in range(c):
    eatable = True
    for i in range(r):
        if cakecells[i][j] == 'S':
            eatable = False
            break
    columnstoeat += 1 if eatable else 0
print((rowstoeat * c) + (columnstoeat * (r - rowstoeat)))
