n = int(input())
if n == 1:
    m = input()
    print(0)
else:
    answer = 0
    welfare = list(map(int, input().split()))
    x = max(welfare)
    for i in welfare:
        answer += x - i
    print(answer)
