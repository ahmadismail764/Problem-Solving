def can_pass_guardpost(budget, prices):
    combinations = [(prices[0], prices[2]), (prices[0], prices[3]),
                    (prices[1], prices[2]), (prices[1], prices[3])]
    for item in combinations:
        if sum(item) <= budget:
            return [item[0], budget - item[0]]
    return -1


def sneak_in_inna(budget, guardposts):
    for i, guardpost in enumerate(guardposts):
        result = can_pass_guardpost(budget, guardpost)
        if result != -1:
            return [i + 1] + result
    return -1


budget = int(input())
guardposts = []
for _ in range(4):
    guardposts.append(list(map(int, input().split())))

result = sneak_in_inna(budget, guardposts)

print(*result) if result != -1 else print(-1)
