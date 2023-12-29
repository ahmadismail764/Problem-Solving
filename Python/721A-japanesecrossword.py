n = int(input())
row = input()
groups = []
count = 0
for i in range(n):
    if row[i] == 'B':
        count += 1

    if row[i] == 'W' or i == n-1:
        if count > 0:
            groups.append(count)
            count = 0
print(len(groups))
for group in groups:
    print(group, end=' ')
