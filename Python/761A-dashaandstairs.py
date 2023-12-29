a, b = map(int, input().split())
print("YES" if (abs(a - b) <= 1 and not (a == 0 and b == 0)) else "NO")
