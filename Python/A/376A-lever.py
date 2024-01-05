lever = input()
level = lever.find('^')
left, right = 0, 0
for k in range(level):
    left += (level - k) * int(lever[k]) if lever[k] != '=' else 0

for k in range(level + 1, len(lever)):
    right += (k - level) * int(lever[k]) if lever[k] != '=' else 0

if left == right:
    print("balance")
elif left > right:
    print("left")
else:
    print("right")
