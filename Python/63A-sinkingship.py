n = int(input())
woman = []
man = []
rat = []
captain = ""
for _ in range(n):
    name, type = input().split()
    if type == "captain":
        captain = name
    elif type == "rat":
        rat.append(name)
    elif type == "woman" or type == "child":
        woman.append(name)
    elif type == "man":
        man.append(name)

for name in rat:
    print(name)
for name in woman:
    print(name)
for name in man:
    print(name)
print(captain)
