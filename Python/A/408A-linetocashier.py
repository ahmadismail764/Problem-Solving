n = int(input())
kas = [int(x) for x in input().split()]
for i in range(n):
    a = sum([int(x) for x in input().split()]) * 5 if kas[i] != 0 else 0
    kas[i] = kas[i] * 15 + a
print(min(kas))
