n = int(input())
arr = list(map(int, input().split()))
unique_elements = set()
start, max_len = 0, 0
for end in range(n):
    while arr[end] in unique_elements:
        unique_elements.remove(arr[start])
        start += 1
    unique_elements.add(arr[end])
    max_len = max(max_len, end - start + 1)
print(max_len)
