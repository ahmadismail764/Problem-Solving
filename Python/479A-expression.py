a = int(input())
b = int(input())
c = int(input())
operation = [a+b+c, a+b*c, a*(b+c), a*b*c, (a+b)*c]
print(max(operation))
