n = int(input())
arr = []
for _ in range(n):
    arr.append(tuple(map(int, input().split())))
m = int(input())
arr_m = list(map(int, input().split()))
for m in arr_m:
    print(sum((m * a >= b) for a, b in arr))
