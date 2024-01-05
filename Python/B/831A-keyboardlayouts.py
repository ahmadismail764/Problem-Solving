class Solver:
    def __init__(self):
        self.layout1, self.layout2, self.text = "", "", ""

    def input(self):
        self.layout1 = input()
        self.layout2 = input()
        self.text = input()

    def answer(self):
        new_text = ""
        for c in self.text:
            if c.isalpha():
                new_char = self.layout2[self.layout1.find(c.lower())].upper(
                ) if c.isupper() else self.layout2[self.layout1.find(c)]
                new_text += new_char
            else:
                new_text += c
        return new_text


solution = Solver()
solution.input()
print(solution.answer())
