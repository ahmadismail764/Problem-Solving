n = int(input())
list = []
for _ in range(n):
    x, y = map(int, input().split())
    list.append((x, y))
current_time = list[0][0] + list[0][1]
for i in range(1, n):
    current_time = max(current_time, list[i][0])
    current_time += list[i][1]
print(current_time)
