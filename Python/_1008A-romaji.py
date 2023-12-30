vowels = "aeiou"
word = input()
flag = True
for i in range(len(word)-1):
    if word[i] == 'n':
        continue
    if word[i] not in vowels and word[i+1] not in vowels:
        flag = False
