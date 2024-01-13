n = int(input())
days = list(map(int, input().split()))
maxLength, currentLength = 1, 1
for i in range(1, n):
    if days[i] >= days[i - 1]:
        currentLength += 1
    else:
        maxLength = max(maxLength, currentLength)
        currentLength = 1
print(max(maxLength, currentLength))
