inputStr = input()
currentLength, maxLength = 0, 0
for ch in inputStr:
    if ch in "AEIOUY":
        currentLength = 0
    else:
        currentLength += 1
        maxLength = max(maxLength, currentLength)
print(maxLength+1)
