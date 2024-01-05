n = int(input())
pos = input()
x = []
X = []

for i in range(n):
    x.append(i) if pos[i] == 'x' else X.append(i)

c = len(x) - len(X)
if c > 0:
    for i in range(c // 2):
        pos = pos[:x[i]] + 'X' + pos[x[i] + 1:]
elif c < 0:
    for i in range(-c // 2):
        pos = pos[:X[i]] + 'x' + pos[X[i] + 1:]

print(abs(c // 2))
print(pos)
