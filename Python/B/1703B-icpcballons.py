tt = int(input())
for _ in range(tt):
    seen = []
    answer = 0
    n = int(input())
    problems = input()
    for prob in problems:
        if prob not in seen:
            seen.append(prob)
            answer += 2
        else:
            answer += 1
    print(answer)
