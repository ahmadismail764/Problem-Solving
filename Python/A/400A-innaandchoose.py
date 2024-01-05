def func():
    s = input().strip()
    a = [1, 2, 3, 4, 6, 12]
    count = 0
    v = []
    for i in range(6):
        rows, cols, ct = a[i], 12 // a[i], 0
        for j in range(cols):
            temp = sum(1 for k in range(rows) if s[j + k * cols] == 'X')
            if temp == rows:
                ct = 1
        if ct == 1:
            v.append(a[i])
        count += ct

    print(count, end=" ")
    for i in range(len(v)):
        print(f"{v[i]}x{12 // v[i]}", end=" ")
    print()


t = int(input())
while t > 0:
    func()
    t -= 1
