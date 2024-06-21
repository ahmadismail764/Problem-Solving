tt = int(input())
for _ in range(tt):
    str1 = input()
    str1 = list(str1)
    str1[0], str1[4] = str1[4], str1[0]
    str1 = ''.join(str1)
    print(str1)
