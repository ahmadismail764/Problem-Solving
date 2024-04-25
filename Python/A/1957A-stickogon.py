t = int(input())
for _ in range(t):
    answer = 0
    n = int(input())
    lengths = list(map(int, input(). split()))
    if len(lengths) <= 2:
        print(0)
    frequency_dict = {}
    frequency_dict = {element: lengths.count(element) for element in lengths}
    for key, value in frequency_dict:
        answer += value % 3
    print(answer)