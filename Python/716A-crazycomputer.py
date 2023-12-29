n, c = map(int, input().split())
speeds = list(map(int, input().split()))
wordcount = 1

for i in range(1, n):
    flag = (speeds[i] - speeds[i - 1] <= c)
    wordcount = wordcount + 1 if flag else 1
print(wordcount)
