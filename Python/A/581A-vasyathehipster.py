a, b = map(int, input().split())
print(min(a, b))
other1 = max(a, b) - min(a, b)
if other1 % 2 == 0:
    print(other1 // 2)
else:
    print((other1 - 1) // 2)
