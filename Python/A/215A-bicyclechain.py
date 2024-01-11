n = int(input())
pedal = list(map(int, input().split()))
m = int(input())
rear_wheel = list(map(int, input().split()))
final = [
    int(rear_wheel[j] / pedal[i])
    for i in range(n)
    for j in range(m)
    if rear_wheel[j] / pedal[i] == int(rear_wheel[j] / pedal[i])
]
print(final.count(max(final)))
