n = int(input())
cities = list(map(int, input().split()))
print(cities[1] - cities[0], cities[-1] - cities[0])
for i in range(1, n - 1):
    cost1, cost2 = cities[-1] - cities[i], cities[i] - cities[0]
    max_cost = max(cost1, cost2)
    cost1, cost2 = cities[i] - cities[i - 1], cities[i + 1] - cities[i]
    min_cost = min(cost1, cost2)
    print(min_cost, max_cost)
print(cities[-1] - cities[-2], cities[-1] - cities[0])
