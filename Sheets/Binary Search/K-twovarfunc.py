def find_minimum_x(n):
    min_x = float('inf')
    for a in range(int(n**(1/3)) + 2):
        low, high = 0, int(n**(1/3)) + 2
        while low <= high:
            b = (low + high) // 2
            x = a**3 + a**2 * b + a * b**2 + b**3
            if x >= n:
                min_x = min(min_x, x)
                high = b - 1
            else:
                low = b + 1
    return min_x


print(find_minimum_x(int(input())))
