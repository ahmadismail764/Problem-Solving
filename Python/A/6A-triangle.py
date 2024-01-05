lengths = list(map(int, input().split()))
lengths.sort()
if ((sum(lengths) - lengths[0]) > 2 * lengths[3]) or ((sum(lengths) - lengths[3]) > 2 * lengths[2]):
    print('TRIANGLE')
elif ((sum(lengths) - lengths[0]) == 2 * lengths[3]) or ((sum(lengths) - lengths[3]) == 2 * lengths[2]):
    print('SEGMENT')
else:
    print('IMPOSSIBLE')
