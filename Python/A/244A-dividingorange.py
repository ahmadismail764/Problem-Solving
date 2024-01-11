n, k = map(int, input().split())
a = list(map(int, input().split()))
s = list(range(1, n * k + 1))
for i in a:
    s.remove(i)
for i in range(k):
    print(" ".join(map(str, [a[i]] + s[i::k])))
