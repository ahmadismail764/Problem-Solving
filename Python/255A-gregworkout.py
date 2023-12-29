n = int(input())
log = list(map(int, input().split()))
bodyparts = [0]*3
for i in range(len(log)):
    bodyparts[i % 3] += log[i]
x = bodyparts.index(max(bodyparts))
if x == 0:
    print('chest')
elif x == 1:
    print('biceps')
else:
    print('back')
