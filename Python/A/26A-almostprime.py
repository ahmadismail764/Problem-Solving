n = int(input())
amount = 0
b = [False] * (n+1)
pfactors = [0] * (n+1)

for i in range(2, n+1):
    if not b[i]:
        for j in range(i * 2, n+1, i):
            b[j] = True
            pfactors[j] += 1

    if pfactors[i] == 2:
        amount += 1

print(amount)
