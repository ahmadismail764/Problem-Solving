string = input()
if len(string) == 1:
    print(string)
else:
    numbers = string.split('+')
    numbers = sorted(numbers)
    for i in range(len(numbers)):
        print(numbers[i], end='')
        print('+' if i != len(numbers) - 1 else '', end='')
