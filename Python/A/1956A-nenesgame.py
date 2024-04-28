tt = int(input())
for _ in range(tt):
    k, q = map(int, input().split())
    a = list(map(int, input().split()))
    ns = list(map(int, input().split()))
    for n in ns:
        print(min(n, min(a) - 1), end=" ")
    print()
