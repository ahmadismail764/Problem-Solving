import random
tt = int(input())
for _ in range(tt):
    s = input()
    if len(set(s)) == 1:
        print("NO")
    else:
        print("YES")
        first = s[0]
        j = 1
        while j < len(s):
            if s[j] != s[0]:
                break
            j += 1
        s = s[j] + s[1:j] + s[0] + s[j+1:]
        print(s)
