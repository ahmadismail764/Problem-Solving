m, d = map(int, input().split())
if m == 2:
    print(4 if d == 1 else 5)
elif m == 4 or m == 6 or m == 9 or m == 11:
    print(6 if d == 7 else 5)
else:
    print(5 if d <= 5 else 6)
