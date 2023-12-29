n = int(input())
feeling = "I hate "
for i in range(2, n + 1):
    feeling += "that I love " if i % 2 == 0 else "that I hate "
feeling += "it"
print(feeling)
