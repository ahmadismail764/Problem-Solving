import math

y, w = map(int, input().split())
dot = 6 - max(y, w) + 1
gcd = math.gcd(dot, 6)
print(f"{dot // gcd}/{6 // gcd}")
