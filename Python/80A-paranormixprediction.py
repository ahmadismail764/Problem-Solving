def is_prime(n):
    if n < 2:
        return False
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return False
    return True


a, b = map(int, input().split())
max_iterations = (b - a) + 1
is_next_prime = False
for i in range(a + 1, b + 1):
    if is_prime(i):
        if i == b:
            is_next_prime = True
        break
    if i - a == max_iterations - 1:
        break
if b == 1:
    is_prime_a = False
else:
    is_prime_a = is_prime(a)
print("YES" if is_prime_a and is_next_prime else "NO")
