t, s, x = map(int, input().split())
if x == t:
    print('YES')
elif x < t:
    print('NO')
else:
    x -= t
    if x == 1:
        print('NO')
    elif ((x % s == 0) or ((x-1) % s == 0)):
        print('YES')
    else:
        print('NO')
