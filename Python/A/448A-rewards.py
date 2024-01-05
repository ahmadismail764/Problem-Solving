a1, a2, a3 = map(int, input().split())
b1, b2, b3 = map(int, input().split())
cups = int((a1 + a2 + a3 + 4)/5)
medals = int((b1 + b2 + b3 + 9)/10)
n = int(input())
if (cups + medals > n):
    print('NO')
else:
    print('YES')
