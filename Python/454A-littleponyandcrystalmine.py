n = int(input())
for i in range(1, n // 2 + 2):
    for j in range(1, n // 2 - i + 2):
        print("*", end="")
    for j in range(1, 2 * i):
        print("D", end="")
    for j in range(1, n // 2 - i + 2):
        print("*", end="")
    print()

for i in range(1, n // 2 + 1):
    for j in range(1, i + 1):
        print("*", end="")
    for j in range(1, n - i * 2 + 1):
        print("D", end="")
    for j in range(1, i + 1):
        print("*", end="")
    print()
