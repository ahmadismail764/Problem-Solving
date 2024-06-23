tt = int(input().strip())
for _ in range(tt):
    n = int(input().strip())
    a = list(map(int, input().strip().split()))

    if a[0] == a[n - 1]:
        print("NO")
    else:
        print("YES")
        # Creating a string 's' with 'R' repeated 'n' times
        s = ['R'] * n
        # Changing the second character to 'B'
        s[1] = 'B'
        # Joining the list into a string and printing it
        print(''.join(s))
