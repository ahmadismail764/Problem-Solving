n, k = map(int, input().split())
numbers = list(input().split())
answer = 0
for number in numbers:
    x = number.count('4') + number.count('7')
    answer += 1 if x <= k else 0
print(answer)
