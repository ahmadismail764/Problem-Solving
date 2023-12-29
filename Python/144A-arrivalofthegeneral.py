n = int(input())
arr = list(map(int, input().split()))

maxIndex = 0
minIndex = n - 1

for i in range(n):
    if arr[i] > arr[maxIndex]:
        maxIndex = i
    if arr[i] <= arr[minIndex]:
        minIndex = i

swaps = maxIndex + (n - 1 - minIndex)
if minIndex < maxIndex:
    swaps -= 1

print(swaps)
