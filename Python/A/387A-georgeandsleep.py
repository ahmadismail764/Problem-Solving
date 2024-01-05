s = input()
t = input()

s_hours, s_minutes = map(int, s.split(":"))
t_hours, t_minutes = map(int, t.split(":"))

hours = s_hours - t_hours
minutes = s_minutes - t_minutes

if minutes < 0:
    minutes += 60
    hours -= 1

hours = (hours + 24) % 24
print(f"{hours:02d}:{minutes:02d}")
