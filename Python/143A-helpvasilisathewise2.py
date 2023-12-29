r1, r2 = map(int, input().split())
c1, c2 = map(int, input().split())
d1, d2 = map(int, input().split())

nums = list()
a = (c1 - r2 + d1) // 2
if (0 < a <= 9 and a not in nums):
    nums.append(a)
b = (d2 - c1 + r1) // 2
if (0 < b <= 9 and b not in nums):
    nums.append(b)
c = (c1 - r1 + d2) // 2
if (0 < c <= 9 and c not in nums):
    nums.append(c)
d = (d1 - c1 + r2) // 2
if (0 < d <= 9 and d not in nums):
    nums.append(d)
print(f"{nums[0]} {nums[1]}\n{nums[2]} {nums[3]}" if len(nums) == 4 else -1)
