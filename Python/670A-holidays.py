def calculate_days_off(n, start_day):
    days_off, current_day = 0, start_day
    while n:
        if current_day == 6 or current_day == 7:
            days_off += 1
        current_day = (current_day % 7) + 1
        n -= 1
    return days_off


n = int(input())
print(calculate_days_off(n, 1), calculate_days_off(n, 6))
