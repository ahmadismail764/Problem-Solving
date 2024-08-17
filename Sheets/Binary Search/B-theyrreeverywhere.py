n = int(input())
flats = input()
unique_characters = set(flats)
required_count = len(unique_characters)
char_count = {}
left, unique_found, min_length = 0, 0, float('inf')
for right in range(n):
    char = flats[right]
    char_count[char] = char_count.get(char, 0) + 1
    if char in unique_characters and char_count[char] == 1:
        unique_found += 1
    while unique_found == required_count:
        min_length = min(min_length, right - left + 1)
        char_count[flats[left]] -= 1
        if flats[left] in unique_characters and char_count[flats[left]] == 0:
            unique_found -= 1
        left += 1
print(min(min_length, n))
