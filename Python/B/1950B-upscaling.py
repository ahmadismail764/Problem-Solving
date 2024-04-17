t = int(input())
for _ in range(t):
    x = int(input())
    if x == 1:
        print("##\n##")
    else:
        answer = []
        flag = True
        for i in range(2*x):
            new = ""
            for j in range(x):
                if (flag):
                    new += ".." if j % 2 else "##"
                else:
                    new += "##" if j % 2 else ".."
            flag ^= i%2
            answer.append(new)
        for string in answer:
            print(string)

