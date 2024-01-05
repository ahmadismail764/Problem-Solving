string = input()
sum = 0
current = 'a'
for c in string:
    next = c
    clockwise = abs(ord(next) - ord(current))
    anti = 26 - clockwise
    sum += min(clockwise, anti)
    current = next
print(sum)
