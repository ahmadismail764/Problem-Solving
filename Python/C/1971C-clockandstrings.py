tt = int(input())
for _ in range(tt):
    a, b, c, d = map(int, input().split())
    s = ""
    for i in range(1, 13):
        if i == a or i == b:
            s += "a"
        if i == c or i == d:
            s += "b"
    print("YES" if s == "abab" or s == "baba" else "NO")
