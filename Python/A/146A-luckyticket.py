n = int(input())
string = input().strip()
for char in string:
    if char != '4' and char != '7':
        print('NO')
        exit()

half = n // 2
first_half = string[:half]
second_half = string[half:]
first_sum = second_sum = 0
for char in first_half:
    first_sum += ord(char)
for char in second_half:
    second_sum += ord(char)
flag = first_sum == second_sum

print('YES' if flag else 'NO')
