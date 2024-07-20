n, m, k = map(int, input().split())
a = list(map(int, input().split()))

# Initialize delta array for lazy propagation
delta = [0] * (n + 1)

# Process operations and build the delta array
for _ in range(m):
    li, ri, di = map(int, input().split())
    delta[li - 1] += di
    if ri < n:
        delta[ri] -= di

# Apply delta to construct the final array a
current_addition = 0
for i in range(n):
    current_addition += delta[i]
    a[i] += current_addition

# Process queries and output results
results = []
for _ in range(k):
    xi, yi = map(int, input().split())
    # Sum from xi-1 to yi (convert to 0-based index)
    sum_query = sum(a[xi - 1:yi])
    results.append(sum_query)

print(*results)
