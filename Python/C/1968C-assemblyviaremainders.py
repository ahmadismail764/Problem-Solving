t = int(input())
for _ in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    S = 1000
    print(S, end=" ")
    for i in range(n - 1):
        S += x[i]
        print(S, end=" ")
    print()
