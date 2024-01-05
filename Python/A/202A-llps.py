string = input()
largest = string[0]
for char in string:
    if char > largest:
        largest = char

print(largest*string.count(largest))
