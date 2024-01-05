binary_codes = {}
password = input()
for i in range(10):
    code = input()
    binary_codes[code] = i
for i in range(0, 80, 10):
    print(binary_codes[password[i:i+10]], end='')
