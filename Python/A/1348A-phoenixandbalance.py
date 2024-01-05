t = int(input())
for _ in range(t):
    x = int(input())
    coins = [2 * i for i in range(1, x + 1)]
    total_weight = sum(coins)
    pile_weight = 0
    for coin in coins:
        if pile_weight + coin <= total_weight // 2:
            pile_weight += coin

    difference = abs(total_weight - 2 * pile_weight)
    print(difference)
