tt = int(input())
string = "ABCDEFG"
for _ in range(tt):
    n, m = map(int, input().split())
    s = input()
    x = 0
    for char in string:
        x += (m - s.count(char)) if s.count(char) > 0 else 0
    print(x)
