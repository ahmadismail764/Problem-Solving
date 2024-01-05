l, r, a = map(int, input().split())

minimum = min(l, r)
maximum = max(l, r)

difference = maximum - minimum

if difference == 0:
    minimum += a // 2
    maximum += a // 2
else:
    if a >= difference:
        minimum += difference
        a -= difference
        minimum += a // 2
        maximum += a // 2
    else:
        minimum += a

print(2 * minimum)
