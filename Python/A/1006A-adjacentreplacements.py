n = int(input())
numbers = list(map(int, input().split()))
numbers = [(num - (not (num % 2))) for num in numbers]
print(*numbers)
