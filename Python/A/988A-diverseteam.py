class Solver:
    def __init__(self):
        self.n = 0
        self.k = 0
        self.ratings = []

    def input_data(self):
        self.n, self.k = map(int, input().split())
        self.ratings = list(map(int, input().split()))

    def answer(self):
        unique = set(self.ratings)
        if len(unique) < self.k:
            print("NO")
        else:
            print("YES")
            for value in list(unique)[: self.k]:
                print(self.ratings.index(value) + 1, end=" ")


solution = Solver()
solution.input_data()
solution.answer()
