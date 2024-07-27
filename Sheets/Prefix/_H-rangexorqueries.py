# Works, but TLE
n, q = map(int, input().split())
arr = list(map(int, input().split()))
xor_prefix = [0] * (n+1)
for i in range(1, n+1):
    xor_prefix[i] = xor_prefix[i-1] ^ arr[i-1]
for _ in range(q):
    a, b = map(int, input().split())
    print(xor_prefix[a-1] ^ xor_prefix[b])
