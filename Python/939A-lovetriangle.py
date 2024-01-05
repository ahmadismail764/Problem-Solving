class Solver:
    def __init__(self):
        self.no_planes = 0
        self.planes = []

    def input(self):
        self.no_planes = int(input())
        self.planes = list(map(int, input().split()))

    def love_triangle(self):
        if (len(self.planes) == 0):
            return False
        for i in range(self.no_planes):
            if self.planes[self.planes[self.planes[i]-1]-1] == i + 1:
                return True
        return False


solution = Solver()
solution.input()
print("YES" if solution.love_triangle() else "NO")
