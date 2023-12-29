def print_bus(bus):
    for row in bus:
        print(''.join(row))


def solve():
    n = int(input())
    bus = [list(input()) for _ in range(n)]
    possible = False

    for i in range(n):
        for j in range(2):
            if bus[i][j*3] == 'O' and bus[i][j*3+1] == 'O':
                bus[i][j*3] = '+'
                bus[i][j*3+1] = '+'
                possible = True
                break
        if possible:
            break

    if not possible:
        print("NO")
    else:
        print("YES")
        print_bus(bus)


solve()
