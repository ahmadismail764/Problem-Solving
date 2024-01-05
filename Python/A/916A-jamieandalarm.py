x = int(input())
n, m = map(int, input().split())
ti = n * 60 + m
for i in range(0, 100000000):
    h = ti // 60
    m = ti % 60
    if h // 10 == 7 or h % 10 == 7 or m // 10 == 7 or m % 10 == 7:
        print(i)
        break
    ti = (ti - x) % 1440
