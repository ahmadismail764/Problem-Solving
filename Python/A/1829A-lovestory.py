tt = int(input())
string = "codeforces"
for _ in range(tt):
    s = input()
    answer = 0
    for i in range(len(s)):
        answer += (s[i] != string[i])
    print(answer)
