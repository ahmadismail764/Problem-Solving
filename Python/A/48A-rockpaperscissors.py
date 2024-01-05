def determine_winner(fyodor, matroskin, sharic):
    if (fyodor == "rock" and matroskin == "scissors" and sharic == "scissors") or (fyodor == "scissors" and matroskin == "paper" and sharic == "paper") or (fyodor == "paper" and matroskin == "rock" and sharic == "rock"):
        return "F"
    elif (matroskin == "rock" and fyodor == "scissors" and sharic == "scissors") or (matroskin == "scissors" and fyodor == "paper" and sharic == "paper") or (matroskin == "paper" and fyodor == "rock" and sharic == "rock"):
        return "M"
    elif (sharic == "rock" and matroskin == "scissors" and fyodor == "scissors") or (sharic == "scissors" and matroskin == "paper" and fyodor == "paper") or (sharic == "paper" and matroskin == "rock" and fyodor == "rock"):
        return "S"
    else:
        return "?"


fyodor = input()
matroskin = input()
sharic = input()

winner = determine_winner(fyodor, matroskin, sharic)
print(winner)
