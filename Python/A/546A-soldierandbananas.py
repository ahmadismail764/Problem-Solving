k, n, w = map(int, input().split())
answer = (k*w*(w+1))//2 - n
print(answer if answer > 0 else 0)
