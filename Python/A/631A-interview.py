n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
max_sum = 0
for l in range(n):
    for r in range(l, n):
        sum_a = 0
        sum_b = 0
        for i in range(l, r + 1):
            sum_a |= a[i]
            sum_b |= b[i]
        max_sum = max(max_sum, sum_a + sum_b)
print(max_sum)
