n = int(input())
money, price = 0, 100
for i in range(n):
    a, p = map(int, input().split())
    if price > p:
        price = p
    money += price * a
print(money)