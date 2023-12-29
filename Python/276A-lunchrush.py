n, k = map(int, input().split())
joys = list()
for i in range(n):
    f, t = map(int, input().split())
    joys.append(f - (t-k) if t > k else f)
print(max(joys))
