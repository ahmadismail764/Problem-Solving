def isTriangular(Tn):
    for n in range(1, Tn + 1):
        if n * (n + 1) / 2 == Tn:
            return 'YES'
    return 'NO'


n = int(input())
print(isTriangular(n))
