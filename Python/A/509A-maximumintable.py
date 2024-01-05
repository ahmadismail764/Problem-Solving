n = int(input())
table = [[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
    table[0][i] = table[i][0] = 1
for i in range(1, n):
    for j in range(1, n):
        table[i][j] = table[i - 1][j] + table[i][j - 1]
answer = table[n - 1][n-1]
print(answer)
