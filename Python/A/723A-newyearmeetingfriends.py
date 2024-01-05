spots = []
for num in input().split():
    spots.append(int(num))

spots.sort()
print(spots[1] - spots[0] + spots[2] - spots[1])
