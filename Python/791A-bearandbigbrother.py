a = 1
b = 1
years = 0
a, b = map(int, input().split())
while a <= b:
    a *= 3
    b *= 2
    years += 1
print(years)
