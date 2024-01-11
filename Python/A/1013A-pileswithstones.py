n = int(input())
before = list(map(int, input().split()))
after = list(map(int, input().split()))
print("Yes" if sum(before) >= sum(after) else "No")
