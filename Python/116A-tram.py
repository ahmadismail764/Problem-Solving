n = int(input())
curr_cap = 0
max_cap = 0
for i in range(0, n):
    a, b = map(int, input().split())
    curr_cap = curr_cap - a + b
    max_cap = curr_cap if curr_cap > max_cap else max_cap
print(max_cap)
