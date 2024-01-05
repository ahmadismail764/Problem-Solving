numbers = input().split()
numbers = [int(num) for num in numbers]

min_numbers = sorted(numbers)[:2]
option1 = sum(numbers)
option2 = 2*sum(min_numbers)
print(min(option1, option2))
