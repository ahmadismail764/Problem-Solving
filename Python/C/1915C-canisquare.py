t = int(input())
for _ in range(t):
    n = int(input())
    buckets = list(map(int, input().split()))
    pocket = sum(buckets) ** 0.5
    print("YES" if pocket.is_integer() else "NO")
