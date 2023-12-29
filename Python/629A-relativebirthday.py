'''from math import comb

# Step 1: Read the input
n = int(input())
cake = [input() for _ in range(n)]

# Step 2: Initialize counts
row_count = [0] * n
col_count = [0] * n

# Step 3: Count chocolates in each row and column
for i in range(n):
    for j in range(n):
        if cake[i][j] == 'C':
            row_count[i] += 1
            col_count[j] += 1

# Step 4: Calculate Famil Door's happiness
happiness = 0
for count in row_count:
    happiness += comb(count, 2)
for count in col_count:
    happiness += comb(count, 2)

# Step 5: Print the happiness
print(happiness)'''

n = int(input())
cake = [input() for _ in range(n)]

happiness = 0

# Count chocolate pairs in rows
for row in cake:
    happiness += row.count('C') * (row.count('C') - 1) // 2

# Count chocolate pairs in columns
for j in range(n):
    column = ''.join([cake[i][j] for i in range(n)])
    happiness += column.count('C') * (column.count('C') - 1) // 2

print(happiness)
