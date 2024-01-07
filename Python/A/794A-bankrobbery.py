answer = 0
a, b, c = map(int, input().split())
no_safes = int(input())
numbers = list(map(int, input().split()))
for num in numbers:
    if b < num < c:
        answer += 1
print(answer)
