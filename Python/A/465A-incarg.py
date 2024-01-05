n = int(input())
cells = input()
if cells.find('0') == -1:
    print(n)
else:
    before = int(cells[::-1], 2)
    after = before + 1
    print(str(bin(before ^ after)).count('1'))
