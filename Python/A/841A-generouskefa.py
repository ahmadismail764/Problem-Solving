n, k = map(int, input().split())
s = input()
mp = {}

for i in range(n):
    mp[s[i]] = (mp[s[i]] + 1) if s[i] in mp else 1

for i in range(n):
    if mp[s[i]] > k:
        print("NO")
        exit()

print("YES")
