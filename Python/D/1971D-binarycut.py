# tt = int(input())
# for _ in range(tt):
#     binary = input()
#     if len(binary) == 1 or len(set(binary)) == 1 or binary == ''.join(sorted(binary)):
#         print(1)
#     else:
#         subs = []
#         substr = binary[0]
#         for i in range(1, len(binary)):
#             if binary[i] == binary[i - 1]:
#                 substr += binary[i]
#             else:
#                 if binary[i] == '1':
#                     substr += binary[i]
#                 else:
#                     subs.append(substr)
#                     substr = binary[i]
#         subs.append(substr)
#         print(subs)
#         # print(len(subs) + 1)
tt = int(input())
for _ in range(tt):
    s = input()
    res = 1
    ex = False
    for i in range(len(s) - 1):
        res += (s[i] != s[i + 1])
        ex |= (s[i] == '0' and s[i + 1] == '1')
    print(res - ex)
