n = int(input())
d = [0] * (n + 2)
f = [0] * 102
distances = list(map(int, input().split()))
for i in range(2, n + 2):
    d[i] = distances[i - 2]
    f[i] = f[i - 1] + d[i]
s, t = map(int, input().split())
if s > t:
    s, t = t, s
distance = f[t] - f[s]
alternative = f[n + 1] - distance
shortest = min(distance, alternative)
print(shortest)
