n = int(input())
holds = list(map(int, input().split()))
differences = []
index_to_difference = {}
for i in range(1, n - 1):
    index_to_difference[holds[i + 1] - holds[i - 1]] = i
holds.pop(index_to_difference[min(index_to_difference)])
for i in range(1, n - 1):
    differences.append(holds[i] - holds[i - 1])
print(max(differences))
