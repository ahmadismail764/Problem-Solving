n = int(input())
midpoint = n**2//2
numbers = []
for i in range(1, midpoint+1):
    numbers.append(i)
    numbers.append(n**2+1-i)
children = [numbers[i:i+n] for i in range(0, n**2, n)]
for child in children:
    for x in child:
        print(x, end=' ')
    print()
