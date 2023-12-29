a, b = map(int, input().split())
awins = 0
bwins = 0
draws = 0
for i in range(1, 7):
    if abs(a - i) > abs(b-i):
        bwins += 1
    elif abs(a - i) == abs(b - i):
        draws += 1
    else:
        awins += 1
print(awins, draws, bwins)
