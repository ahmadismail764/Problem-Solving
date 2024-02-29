t = int(input())
for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    sum = nums[0]
    for i in range(1, n):
        sum |= nums[i]
    print(sum)
