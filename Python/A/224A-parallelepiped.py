A, B, C = map(int, input().split())
a = (A * B // C) ** 0.5
b = (B * C // A) ** 0.5
c = (A * C // B) ** 0.5
edge_sum = 4 * (a + b + c)
print(int(edge_sum))
