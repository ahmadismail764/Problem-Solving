x = int(input())
print(x//2)
if x % 2 == 0:
    for i in range(x//2):
        print(2, end=' ')
else:
    for i in range((x//2) - 1):
        print(2, end=' ')
    print(3)
