vasiliy1, vasiliy2 = map(int, input().split())
n = int(input())

times = list()
for i in range(n):
    taxi_x, taxi_y, taxi_v = map(int, input().split())
    point1 = (vasiliy1, vasiliy2)
    point2 = (taxi_x, taxi_y)
    d = ((point2[0]-point1[0])**2 + (point2[1] - point1[1])**2) ** 0.5
    times.append(d/taxi_v)

print("{:.20f}".format(min(times)))
