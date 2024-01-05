n, x = map(int, input().split())
values = list(map(int, input().split()))
total = abs(sum(values))
print(total//x + min(total % x, 1))
