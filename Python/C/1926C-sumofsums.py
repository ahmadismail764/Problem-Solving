cnt = [0] * 200005
total_sum = 0
for i in range(1, 200001):
    s = str(i)
    for digit in s:
        total_sum += int(digit)
    cnt[i] = total_sum

t = int(input())
for x in range(t):
    num = int(input())
    print(cnt[num])
