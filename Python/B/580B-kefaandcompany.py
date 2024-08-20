n, d = map(int, input().split())
friends = []
for i in range(n):
    friends.append(tuple(map(int, input().split())))
friends.sort()

left, max_friendship, curr_friendship = 0, 0, 0
for right in range(n):
    # Add the current friend's friendship factor
    curr_friendship += friends[right][1]
    # Adjust the left pointer to ensure the difference is less than d for all friends
    while friends[right][0] - friends[left][0] >= d:
        curr_friendship -= friends[left][1]
        left += 1
    # Update the maximum friendship factor found
    max_friendship = max(max_friendship, curr_friendship)
print(max_friendship)
