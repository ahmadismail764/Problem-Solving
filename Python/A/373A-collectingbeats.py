k = int(input())
panels = input().strip()
panels2 = input().strip()
panels3 = input().strip()
panels4 = input().strip()
panels += panels2 + panels3 + panels4
flag = True
for i in range(1, 10):
    if (panels.count(str(i)) > (k * 2)):
        print('NO')
        exit()
print('YES')