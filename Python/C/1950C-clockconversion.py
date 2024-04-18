t = int(input())
for _ in range(t):
    time = input()
    answer = ""
    if time[0:2] == "00":
        answer = "12:" + time[3:] + " AM"
    elif time[0:2] == "12":
        answer = time + " PM"
    else:
        postmeridium = int(time[0:2]) > 12 
        if postmeridium:
            answer = str(int(time[0:2]) - 12) + time[2:] + " PM"
            if (len(answer) < 8):
                answer = "0" + answer
        else:
            answer = time + " AM"
    print(answer)