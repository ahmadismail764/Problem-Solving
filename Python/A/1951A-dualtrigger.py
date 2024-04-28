t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    mi, mx = n, -1
    for i in range(n):
        if s[i] == '1':
            mi = min(mi, i)
            mx = max(mx, i)
    flag = s.count('1') % 2 or (s.count('1') == 2 and mx - mi == 1)
    print("NO" if flag else "YES")
