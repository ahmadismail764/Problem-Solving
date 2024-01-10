n = int(input())
stairways = 0
stairs = list(map(int, input().split()))
stairway_sizes = list()
for i in range(n):
    if stairs[i] == 1:
        stairways += 1
    if i > 0 and stairs[i] == 1:
        stairway_sizes.append(stairs[i - 1])
stairway_sizes.append(stairs[n - 1])
print(stairways)
print(*stairway_sizes)
