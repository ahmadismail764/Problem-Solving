n = int(input())
new_words = list(input().split())
words = set()

for new_word in new_words:
    if len(new_word) == 1:
        words.add(new_word)
    else:
        new_word = sorted(new_word)
        seen = set()
        result = ""
        for c in new_word:
            if c not in seen:
                result += c
                seen.add(c)
        words.add(result)
print(len(words))
