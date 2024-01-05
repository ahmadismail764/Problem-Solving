n, m = map(int, input().split())
answer = 0
floors = []
for i in range(n):
    floor = list(map(int, input().split()))
    floors.append(floor)
for i in range(n):
    for j in range(0, 2 * m, 2):
        answer += (1 if floors[i][j] == 1 or floors[i][j + 1] == 1 else 0)
print(answer)
