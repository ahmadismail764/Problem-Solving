def is_berlanese(word):
    vowels = "aeiou"
    for i in range(len(word)):
        if word[i] not in vowels and word[i] != 'n':
            if i + 1 < len(word) and word[i + 1] not in vowels:
                return "NO"
    return "YES"


word = input()
if len(word) == 1:
    print("YES" if (word in "aeinou") else "NO")
elif len(word) == 2:
    if word[1] not in "aeinou":
        print("NO")
    else:
        print("YES" if (word[0] in "aeinou") else "NO")
else:
    print(is_berlanese(word))
