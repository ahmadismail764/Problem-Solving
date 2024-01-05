n = int(input().strip())
home = input()
s = set()
for i in range(n):
    a = input().strip()
    b = a[5:8] if a[:3] == home else a[:3]
    s.remove(b) if b in s else s.add(b)
print("home" if len(s) == 0 else "contest")
