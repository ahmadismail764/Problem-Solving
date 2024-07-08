def calculate_total_ability(n, abilities):
    sum_h = sum(abilities)
    sum_sq = sum(x * x for x in abilities)
    total_ability = (sum_h * sum_h - sum_sq) // 2
    return total_ability


n = int(input())
abilities = list(map(int, input().split()))
print(calculate_total_ability(n, abilities))
