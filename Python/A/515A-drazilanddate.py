a, b, s = map(int, input().split())
a = abs(a)
b = abs(b)
print("No" if (s < a + b) or ((s - (a + b)) % 2 == 1) else "Yes")
