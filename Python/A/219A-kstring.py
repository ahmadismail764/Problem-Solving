k = int(input())
s = sorted(input())
ans = s[::k]*k
print([-1, "".join(ans)][sorted(ans) == s])
