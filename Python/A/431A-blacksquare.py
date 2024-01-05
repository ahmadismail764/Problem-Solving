a = list(map(int, input().split()))
s = input()

sum = 0
for c in s:
    i = int(c) - 1
    sum += a[i]

print(sum)
