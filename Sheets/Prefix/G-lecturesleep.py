n, k = map(int, input().split())
theorems = list(map(int, input().split()))
sleep_behavior = list(map(int, input().split()))
sleep_string = ''.join(map(str, sleep_behavior))
zero_count = float('-inf')
curr_index = 0
for i in range(k, n):
    curr = sleep_string[i-k:i+1]
    if curr.count('0') > zero_count:
        zero_count = curr.count('0')
        curr_index = i - k + 1
for i in range(curr_index, curr_index + k):
    if sleep_behavior[i] == 0:
        sleep_behavior[i] = 1
print(sum(theorems[i] for i in range(n) if sleep_behavior[i] == 1))
