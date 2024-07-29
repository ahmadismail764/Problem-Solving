n = int(input())
arr = list(map(int, input().split()))
print((sum(arr) * sum(arr) - sum(x * x for x in arr)) // 2)
