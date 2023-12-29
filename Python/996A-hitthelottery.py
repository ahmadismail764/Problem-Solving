amount = int(input())
denominations = [100, 20, 10, 5, 1]
num_of_bills = [0, 0, 0, 0, 0]
remainingAmount = amount
answer = 0

for i in range(5):
    num_of_bills[i] = remainingAmount // denominations[i]
    remainingAmount %= denominations[i]

for i in range(5):
    answer += num_of_bills[i]

print(answer)
