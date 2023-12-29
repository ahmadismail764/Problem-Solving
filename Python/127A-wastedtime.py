n, k = map(int, input().split())
points = list()
for i in range(n):
    x, y = map(int, input().split())
    point = (x, y)
    points.append(point)
total_distance = 0
for i in range(1, n):
    total_distance += (((points[i][0] - points[i-1][0])**2 +
                        (points[i][1] - points[i-1][1])**2)**0.5)
print("{:.9f}".format(total_distance * k / 50))
