tt = int(input())
for _ in range(tt):
    n = int(input())
    arr_a = list(map(int, input().split()))
    arr_b = list(map(int, input().split()))
    m = int(input())
    arr_d = list(map(int, input().split()))
    for i in range(n):
        if arr_a[i] != arr_b[i]:
            if arr_b[i] not in arr_d:
                print("NO")
                break
            else:
                arr_d.remove(arr_b[i])
