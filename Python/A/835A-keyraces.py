s, v1, v2, t1, t2 = map(int, input().split())
first = s*v1 + 2 * t1
second = s*v2 + 2 * t2
if first < second:
    print('First')
elif first > second:
    print('Second')
else:
    print('Friendship')
