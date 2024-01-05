anton = 0
danik = 0
n = int(input())
s = input()

for c in s:
    if c.lower() == 'a':
        anton += 1
    elif c.lower() == 'd':
        danik += 1

if anton > danik:
    print("Anton")
elif danik > anton:
    print("Danik")
else:
    print("Friendship")
