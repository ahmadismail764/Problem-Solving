n, k = map(int, input().split())
s = input()
s = sorted(s)
last = ord('a') - 2
ans, len_count = 0, 0
for char in s:
    if ord(char) >= last + 2:
        last = ord(char)
        ans += ord(char) - ord('a') + 1
        len_count += 1
        if len_count >= k:
            print(ans)
            exit(0)

print(-1)
