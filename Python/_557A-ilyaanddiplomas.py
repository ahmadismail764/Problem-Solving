n = int(input())
min1, max1 = map(int, input().split())
min2, max2 = map(int, input().split())
min3, max3 = map(int, input().split())

first_degrees = max(max1, n - min2 - min3)
second_degrees = max(min2, n - first_degrees - min3)
third_degrees = n - first_degrees - second_degrees
print(first_degrees, second_degrees, third_degrees)
