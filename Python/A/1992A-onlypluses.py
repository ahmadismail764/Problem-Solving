tt = int(input())
for _ in range(tt):
    a, b, c = map(int, input().split())
    for i in range(5):
        x = min(a, b, c)
        if x == a:
            a += 1
        elif x == b:
            b += 1
        else:
            c += 1
    print(a * b * c)
