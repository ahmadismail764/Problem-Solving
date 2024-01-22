k = int(input())
s = sorted(input())
ans = s[::k] * k
print(ans if sorted(ans) == s else -1)
