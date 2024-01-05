n, t = input().split()
n = int(n)
if t == '10':
    print(-1 if n == 1 else ('1'*(n-1)+'0'))
else:
    print(t*n)
