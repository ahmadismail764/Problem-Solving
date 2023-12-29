passw = input()
n = int(input())

if n == 1:
    s = input()
    print('YES' if (s == passw or s == passw[::-1]) else 'NO')
else:
    flag = 0
    okf = 0
    okl = 0
    while n > 0:
        s = input()
        if passw[0] == s[1]:
            okf = 1
        if passw[1] == s[0]:
            okl = 1
        if passw == s:
            flag = 1
        n -= 1
    print("YES" if (flag == 1 or (okf == okl and okf == 1))else "NO")
