n = int(input())
cards = list(map(int, input().split()))
total = sum(cards)
target = 2 * total / n
pair_indexes = set()

for i in range(n):
    for j in range(i + 1, n):
        if cards[i] + cards[j] == target and i+1 not in pair_indexes and j+1 not in pair_indexes:
            pair_indexes.add(i+1)
            pair_indexes.add(j+1)
            print(i+1, j+1)
            break
