import re
n, k = map(int, input().split())
theorems = list(map(int, input().split()))
sleep_list = list(map(int, input().split()))
sleep_string = ''.join(str(x) for x in sleep_list)


def longest_zero_substring(s):
    max_length = 0
    max_start = -1
    current_length = 0
    current_start = -1

    for i in range(len(s)):
        if s[i] == '0':
            if current_start == -1:
                current_start = i
            current_length += 1
        else:
            if current_length > max_length:
                max_length = current_length
                max_start = current_start
            current_length = 0
            current_start = -1

    # Check again at the end of the string
    if current_length > max_length:
        max_length = current_length
        max_start = current_start

    return max_start


index = longest_zero_substring(sleep_string)
for i in range(index, max(n, n-k+1)):
    sleep_list[i] = 1
ans = 0
for i in range(n):
    if sleep_list[i]:
        ans += theorems[i]
print(ans+1)
