necklace = input()
pearls, links = necklace.count('o'), necklace.count('-')
if links == 0 or pearls == 0:
    print("YES")
else:
    print("NO" if links % pearls else "YES")
