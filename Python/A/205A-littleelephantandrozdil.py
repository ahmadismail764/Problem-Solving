n = int(input())
cities = list(map(int, input().split()))
answer = min(cities)
print("Still Rozdil" if cities.count(answer) > 1 else cities.index(answer) + 1)
