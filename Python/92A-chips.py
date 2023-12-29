n, m = map(int, input().split())
current_walrus = 1
while m >= current_walrus:
    m -= current_walrus
    current_walrus += 1
    if current_walrus > n:
        current_walrus = 1
print(m)
