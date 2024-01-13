n = int(input())
a = sorted(list(map(int, input().split())))
if sum(a) % 2 == 0:
    print(sum(a))
else:
    for i in range(n):
        if a[i] % 2 != 0:
            print(sum(a) - a[i])
            break
