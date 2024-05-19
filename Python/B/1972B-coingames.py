tt = int(input())
for _ in range(tt):
    n = int(input())
    coins = input()
    print("YES" if coins.count("U") % 2 else "NO")
