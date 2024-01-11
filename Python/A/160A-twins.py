n = int(input())
coins = sorted(list(map(int, input().split())))
target, curr, takencoins = sum(coins), 0, 0
while curr <= target - curr:
    curr += coins[n - 1 - takencoins]
    takencoins += 1
print(takencoins)
