t = int(input())
for _ in range(t):
    n, a, b = map(int, input().split())
    option_a = a * n
    option_b = (n - 1) // 2 * b + a if n % 2 else b * n // 2
    print(option_a if option_a < option_b else option_b)