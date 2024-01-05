n = int(input())
perform_good = False
for _ in range(n):
    handle, before, after = input().split()

    before_rating, after_rating = int(before), int(after)

    if before_rating >= 2400 and after_rating > before_rating:
        perform_good = True
        break
print("YES" if perform_good else "NO")
