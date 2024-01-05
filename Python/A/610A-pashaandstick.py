n = int(input())
if n % 2 == 1:
    print(0)
else:
    print(n//4 if n % 4 != 0 else n//4 - 1)
