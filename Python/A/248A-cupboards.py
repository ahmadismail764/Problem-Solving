n = int(input())
right = []
left = []
for i in range(n):
    r, l = map(int, input().split())
    right.append(r)
    left.append(l)
righttime = min(right.count(0), right.count(1))
lefttime = min(left.count(0), left.count(1))
print(righttime + lefttime)
