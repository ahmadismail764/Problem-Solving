s = input()
answer = set()
for char in s:
    if char != '{' and char != '}' and char != ',' and char != ' ':
        answer.add(char)
print(len(answer))
