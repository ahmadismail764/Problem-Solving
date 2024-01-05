s = input()
distinct_words = set()
for i in range(len(s)):
    distinct_words.add(s)
    s = s[-1] + s[:-1]
print(len(distinct_words))