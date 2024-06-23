tt = int(input())

for _ in range(tt):
    n = input()
    if len(n) == 1:
        print("NO")
    elif len(n) == 2:
        num = int(n)
        print("YES" if 10 <= num <= 18 else "NO")
    else:
        flag = True
        if n[0] != '1' or n[-1] == '9':
            flag = False
        else:
            for i in range(1, len(n) - 1):
                if n[i] == '0':
                    flag = False
                    break
        print("YES" if flag else "NO")
