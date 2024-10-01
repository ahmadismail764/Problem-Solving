import math
tt = int(input())
for _ in range(tt):
    n = int(input())
    arr_a = list(map(int, input().split()))
    arr_b = list(map(int, input().split()))
    arr_a.sort()
    arr_b.sort()
    prefix_a, prefix_b = [0] * (n+1), [0] * (n+1)
    for i in range(1, n+1):
        prefix_a[i] = arr_a[i-1] + prefix_a[i-1]
        prefix_b[i] = arr_b[i-1] + prefix_b[i-1]
    my_sum = prefix_a[n] - prefix_a[n//4]
    his_sum = prefix_b[n] - prefix_b[n//4]
    print(0 if my_sum >= his_sum else math.ceil((his_sum - my_sum)/100))
