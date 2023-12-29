n = int(input())
events = list(map(int, input().split()))
recruits = 0
crimes = 0
for event in events:
    if event == -1:
        if recruits == 0:
            crimes += 1
        else:
            recruits -= 1
    else:
        recruits += event
print(crimes)
