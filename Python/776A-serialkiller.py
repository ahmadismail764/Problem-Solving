first_two = tuple(input().split())
n = int(input())
victims = [first_two]

current = first_two
for i in range(n):
    x, y = input().split()
    if current[0] == x:
        current = (y, current[1])
        victims.append(current)
    elif current[1] == x:
        current = (current[0], y)
        victims.append(current)

for victim in victims:
    print(victim[0], victim[1])
