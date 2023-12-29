def is_magical(number):
    for c in number:
        if c != '1' and c != '4':
            return False
    if (number[0] == '4' or number.find('444') != -1):
        return False
    return True
number = input()
print('YES' if is_magical(number) else 'NO')