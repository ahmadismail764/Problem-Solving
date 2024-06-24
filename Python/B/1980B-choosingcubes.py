tt = int(input())
for _ in range(tt):
    n, f, k = map(int, input().split())
    arr = list(map(int, input().split()))
    new_arr = sorted(arr, reverse=True)[k:]
    if arr.count(arr[f-1]) == 1:
        print("NO" if arr[f-1] in new_arr else "YES")
    else:
        cnt = new_arr.count(arr[f-1])
        if cnt == arr.count(arr[f-1]):
            print("NO")
        elif cnt == 0:
            print("YES")
        else:
            print("MAYBE")
