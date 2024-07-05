n, m = map(int, input().split())
column_heights = [0] * n
new_squares = list(map(int, input().split()))
for square in new_squares:
    column_heights[square - 1] += 1
score = 0
while 0 not in column_heights:
    column_heights = list(map(lambda x: x - 1, column_heights))
    score += 1
print(score)
