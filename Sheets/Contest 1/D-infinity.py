n = int(input())
signs_and_as = []
for _ in range(n):
    s, a = map(int, input().split())
    signs_and_as.append((s, a))
m = int(input())
array_x = list(map(int, input().split()))
for x in array_x:
    answer = 0
    for s, a in signs_and_as:
        answer += ((s * x) - a >= 0)
    print(answer)
