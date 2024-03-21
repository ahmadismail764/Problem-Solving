def generate_string(n):
    if n == 1:
        return "A"
    elif n == 2:
        return "AA"
    else:
        result = "A" * (n - 2)
        result += "AB"
        return result


t = int(input())
for _ in range(t):
    n = int(input())
    if n == 1 or n == 2:
        print("NO")
    else:
        print("YES")
        print(generate_string(n))
