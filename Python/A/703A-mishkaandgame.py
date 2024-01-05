n = int(input())
mishkawins, chriswins = 0, 0
for _ in range(n):
    mishka, chris = map(int, input().split())
    if mishka > chris:
        mishkawins += 1
    elif chris > mishka:
        chriswins += 1

if mishkawins > chriswins:
    print('Mishka')
elif chriswins > mishkawins:
    print('Chris')
else:
    print('Friendship is magic!^^')
