n = int(input())
cnt = 0
i = 1

while True:
    if i > 99:
        cnt += 3
    elif i > 9:
        cnt += 2
    else:
        cnt += 1

    if cnt >= n:
        num = i
        break

    i += 1

if cnt == n:
    ans = num % 10
else:
    pos = cnt - n
    if pos == 1:
        ans = (num // 10) % 10
    else:
        ans = (num // 100) % 10

print(ans)
