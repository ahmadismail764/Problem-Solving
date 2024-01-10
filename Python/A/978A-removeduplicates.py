n = int(input())
numbers = list(map(int, input().split()))
final: list[int] = []
for i in range(n - 1, -1, -1):
    if numbers[i] not in final:
        final.insert(0, numbers[i])
print(len(final))
print(*final)
