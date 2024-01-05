n = int(input())
a = int(input())
b = int(input())
c = int(input())
x = min(a, b, c)
if x == a or x == b or n == 1:
    print((n - 1) * min(a, b))
else:
    print(min(a, b) + c * (n - 2))
