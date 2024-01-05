def is_composite(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return True
    return False


n = int(input())
for i in range(4, n - 4):
    if is_composite(i) and is_composite(n - i):
        print(i, n - i)
        break
