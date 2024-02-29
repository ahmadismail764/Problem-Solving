t = int(input())
for _ in range(t):
    s = input()
    print("NO" if s.count("a") != s.count("b") else "YES")
