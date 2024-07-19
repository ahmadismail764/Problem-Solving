# Works, but exceeds time limit
n, k, q = map(int, input().split())
recipe_ranges = []
for i in range(n):
    l, r = map(int, input().split())
    recipe_ranges.append((l, r))


for i in range(q):
    count = dict()
    x, y = map(int, input().split())
    for z in range(x, y+1):
        for r in recipe_ranges:
            if (z >= r[0] and z <= r[1]):
                count[z] = count.get(z, 0) + 1
    print(sum(1 for value in count.values() if value >= k))
