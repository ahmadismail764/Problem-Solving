tt = int(input())
for _ in range(tt):
    n, m, k = map(int, input().split())
    ans1 = [i for i in range(n, m, -1)]
    ans2 = [i for i in range(1, m + 1)]
    print(*(ans1+ans2))
