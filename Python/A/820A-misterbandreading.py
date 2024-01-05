c, vo, v1, a, l = map(int, input().split())
days = 1
read = 0
have = 0
have = read = vo
while have < c:
    read = min(v1, read + a)
    have += read - l
    days += 1
print(days)
