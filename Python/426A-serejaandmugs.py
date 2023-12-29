n, s = map(int, input().split())
volumes = list(map(int, input().split()))
print('YES' if sum(volumes) - max(volumes) <= s else 'NO')
