t = int(input())
for _ in range(t):
    n = int(input())
    up = input()
    down = input()
    grid = [up, down]
    paths = dict()
    for i in range(n):
        x = grid[0][: i + 1] + grid[1][i:n]
        if x not in paths:
            paths[x] = 1
        else:
            paths[x] += 1
    sorted_paths = sorted(paths.items(), key=lambda item: item[1], reverse=True)
    highest_key, highest_value = sorted_paths[0]
    print(highest_key)
    print(highest_value)
