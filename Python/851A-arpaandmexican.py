n, k, t = map(int, input().split())
if t < k + 1:
    print(t)
elif t > k and t < n + 1:
    print(k)
else:
    print(k - (t - n))
