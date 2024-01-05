n, m = map(int, input().split())
answer = n
x = list(map(int, input().split()))
for c in x:
    answer += 1 if c > m else 0
print(answer)
