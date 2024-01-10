n = int(input())
max_socks_on_table = 0
bag = list(map(int, input().split()))
pairs_on_table: set[int] = set()
for item in bag:
    if item in pairs_on_table:
        pairs_on_table.remove(item)
    else:
        pairs_on_table.add(item)
        max_socks_on_table = max(max_socks_on_table, len(pairs_on_table))
print(max_socks_on_table)
