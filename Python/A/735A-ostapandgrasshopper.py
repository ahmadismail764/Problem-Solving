len, n = map(int, input().split())
str = input()
g = str.find('G')
t = str.find('T')
if g > t:
    for i in range(t, g+1, n):
        if str[i] == '#':
            print("NO")
            exit()
        elif str[i] == 'G':
            print("YES")
            exit()
    print("NO")
else:
    for i in range(g, t+1, n):
        if str[i] == '#':
            print("NO")
            exit()
        elif str[i] == 'T':
            print("YES")
            exit()
    print("NO")
