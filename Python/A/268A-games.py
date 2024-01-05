n = int(input())
host_uniforms = []
guest_uniforms = []

for _ in range(n):
    host, guest = map(int, input().split())
    host_uniforms.append(host)
    guest_uniforms.append(guest)

num_games = n * (n - 1)
num_switches = 0

for i in range(n):
    for j in range(n):
        if i != j and host_uniforms[i] == guest_uniforms[j]:
            num_switches += 1

print(num_switches)
