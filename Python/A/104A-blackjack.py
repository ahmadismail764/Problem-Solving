n = int(input())
required = n - 10
if required <= 0 or required > 11:
    print(0)
elif required == 10:
    print(15)
else:
    print(4)
