n = int(input())
print(n*n//2 if n % 2 == 0 else n*n//2 + 1)
for i in range(n):
    for j in range(n):
        if i % 2 == 0:
            print('C' if j % 2 == 0 else '.', end='')
        else:
            print('.' if j % 2 == 0 else 'C', end='')
    print()
