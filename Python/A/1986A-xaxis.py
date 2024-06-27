tt = int(input())
for _ in range(tt):
    a, b, c = map(int, input().split())
    x = [(abs(a - i) + abs(b - i) + abs(c-i)) for i in range(1, 11)]
    print(min(x))
