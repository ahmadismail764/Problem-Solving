n, m = map(int, input().split())
bulbs = set()
for _ in range(n):
    row = list(map(int, input().split()))
    row.pop(0)
    for element in row:
        bulbs.add(element)
print('YES' if bulbs == set(range(1, m + 1)) else 'NO')
