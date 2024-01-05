n, k, l, c, d, p, nl, np = map(int, input().split())
amount = (k * l) / nl
limes = (c * d)
salt = (p / np)
answer = int(min(amount, limes, salt) // n)
print(answer)
