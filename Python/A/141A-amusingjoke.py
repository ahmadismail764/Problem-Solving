guest_name = input()
host_name = input()
pile_letters = input()

char_counts = {}
for c in guest_name:
    char_counts[c] = char_counts.get(c, 0) + 1

for c in host_name:
    char_counts[c] = char_counts.get(c, 0) + 1

for c in pile_letters:
    if c in char_counts and char_counts[c] > 0:
        char_counts[c] -= 1
    else:
        print("NO")
        exit()

for count in char_counts.values():
    if count > 0:
        print("NO")
        exit()

print("YES")
