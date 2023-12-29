n = int(input())
x = 0
for i in range(n):
    operation = input()
    x = x + 1 if operation[1] == '+' else x - 1
print(x)
