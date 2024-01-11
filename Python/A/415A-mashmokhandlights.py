n, m = map(int, input().split())
lights = [True] * n
whoturnedoff = [0] * n
pressed = list(map(int, input().split()))
for button in pressed:
    for i in range(button - 1, n):
        if lights[i]:
            lights[i] = False
            whoturnedoff[i] = button
        else:
            break
print(*whoturnedoff)
