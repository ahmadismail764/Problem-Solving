from collections import deque
n = int(input())
arr = list(map(int, input().split()))
start, ans = 0, 1
min_deque, max_deque = deque(), deque()
for end in range(n):
    while min_deque and arr[min_deque[-1]] >= arr[end]:
        min_deque.pop()
    min_deque.append(end)
    while max_deque and arr[max_deque[-1]] <= arr[end]:
        max_deque.pop()
    max_deque.append(end)
    while arr[max_deque[0]] - arr[min_deque[0]] > 1:
        start += 1
        if min_deque[0] < start:
            min_deque.popleft()
        if max_deque[0] < start:
            max_deque.popleft()
    ans = max(ans, end - start + 1)
print(ans)
