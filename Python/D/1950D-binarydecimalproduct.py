binary_decimals = []
def ok(n):
    if n == 1:
        return True
    ans = False
    for i in binary_decimals:
        if n % i == 0:
            ans |= ok(n // i)
    return ans
def solve():
    n = int(input())
    print("YES" if ok(n) else "NO")


for i in range(2, 100007):
    curr = i
    bad = False
    while curr:
        if curr % 10 > 1:
            bad = True
            break
        curr //= 10
    if not bad:
        binary_decimals.append(i)
tt = int(input())
for _ in range(tt):
    solve()
