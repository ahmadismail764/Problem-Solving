n = int(input())
numbers = list(map(int, input().split()))
count_map: dict[int, int] = {}
for num in numbers:
    count_map[num] = count_map.get(num, 0) + 1
max_count = max(count_map.values(), default=0)
print(max_count)
