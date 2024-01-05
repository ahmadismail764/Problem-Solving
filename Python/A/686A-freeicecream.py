n, x = map(int, input().split())
stock = x
distress = 0

for _ in range(n):
    transaction, d = input().split()
    d = int(d)

    if transaction == '+':
        stock += d
    else:
        if stock >= d:
            stock -= d
        else:
            distress += 1

print(stock, distress)
