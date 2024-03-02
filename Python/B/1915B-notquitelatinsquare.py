t = int(input())
for _ in range(t):
    first = input()
    second = input()
    third = input()
    if "?" in first:
        if "A" not in first:
            print("A")
        elif "B" not in first:
            print("B")
        else:
            print("C")
    elif "?" in second:
        if "A" not in second:
            print("A")
        elif "B" not in second:
            print("B")
        else:
            print("C")
    else:
        if "A" not in third:
            print("A")
        elif "B" not in third:
            print("B")
        else:
            print("C")
