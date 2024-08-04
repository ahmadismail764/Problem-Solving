n = int(input())
arr = list(map(int, input().split()))
if n < 3 or sum(arr) % 3:
    print(0)
elif n == 3:
    print(int(arr[0] == arr[1] == arr[2]))
else:
    ans = 0
    prefix = [0] * (n+1)
    for i in range(1, n+1):
        prefix[i] = prefix[i-1] + arr[i-1]
    for i in range(1, n - 1):
        for j in range(i + 1, n):
            part1 = prefix[i]
            part2 = prefix[j] - prefix[i]
            part3 = prefix[n] - prefix[j]
            ans += (part1 == part2 == part3)
    print(ans)
