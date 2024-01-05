username = input()
seen = set()
result = ''
for c in username:
    if c not in seen:
        seen.add(c)
        result += (c)
print("CHAT WITH HER!" if len(result) % 2 == 0 else "IGNORE HIM!")
