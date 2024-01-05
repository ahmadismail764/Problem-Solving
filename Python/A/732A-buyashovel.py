k, r = map(int, input().split())
for n in range(1, 100):
    total = n * k
    if total % 10 == 0 or total % 10 == r:
        print(n)
        exit()

for n in range(11, 100):
    total = n * k
    if total % 10 == 0 or total % 10 == r:
        print(n//10)
        exit()
