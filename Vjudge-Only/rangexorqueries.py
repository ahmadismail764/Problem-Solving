n, q = map(int, input().split())
arr = list(map(int, input().split()))

xor_pref = [0] * (n+1)
for i in range(1, n+1):
    xor_pref[i] = xor_pref[i-1] ^ arr[i-1]

for _ in range(q):
    l, r = map(int, input().split())
    print(xor_pref[r] ^ xor_pref[l-1])
