def gcd(x, y):
    return y if x == 0 else gcd(y % x, x)


a, b, n = map(int, input().split())
k = 0
while n >= 0:
    k += 1
    n -= gcd(a if k % 2 == 1 else b, n)
print(k % 2)
