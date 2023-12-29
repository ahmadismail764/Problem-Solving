n = int(input())
before = input()
after = input()
moves = 0
for i in range(n):
    x = abs(ord(before[i]) - ord(after[i]))
    moves += min(x, 10 - x)
print(moves)
