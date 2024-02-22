r, g, b = map(int, input().split())
print(
    max(
        30 + 3 * ((r + 1) // 2 - 1),
        31 + 3 * ((g + 1) // 2 - 1),
        32 + 3 * ((b + 1) // 2 - 1),
    )
)
