a = int(input())
b = int(input())
length = abs(a - b)
count_a = length // 2
count_b = length - count_a
result = (count_a * (count_a + 1) // 2) + (count_b * (count_b + 1) // 2)
print(result)
