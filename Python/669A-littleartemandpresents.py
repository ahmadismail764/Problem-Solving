import math
stons = int(input())
gift = 0
gift = 2 * math.floor(stons / 3)
if stons % 3 > 0:
    gift += 1
print(gift)
