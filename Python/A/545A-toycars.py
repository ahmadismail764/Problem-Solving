n = int(input())
good_cars = list()
for i in range(n):
    row = list(map(int, input().split()))
    if row.count(1) == 0 and row.count(3) == 0:
        good_cars.append(i + 1)
print(len(good_cars))
print(*good_cars)
