k = int(input())
months = list(map(int, input().split()))
if k > sum(months):
    print(-1)
else:
    months = sorted(months, reverse=True)
    i = curr_sum = 0
    while curr_sum < k:
        curr_sum += months[i]
        i += 1
    print(i)
