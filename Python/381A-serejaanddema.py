n = int(input())
cards = list(map(int, input().split()))
sereja = dima = 0
left = 0
right = n - 1
chosen_card = 0
sereja_turn = True
while left <= right:
    if cards[left] >= cards[right]:
        chosen_card = cards[left]
        left += 1
    else:
        chosen_card = cards[right]
        right -= 1
    if sereja_turn:
        sereja += chosen_card
    else:
        dima += chosen_card
    sereja_turn ^= 1
print(sereja, dima)
