account = input()
if int(account) < 0:
    if len(account) == 3 and account[2] == '0':
        print(0)
    else:
        if (int(account[len(account)-2]) <= int(account[len(account)-1])):
            account = account[:-1]
        else:
            account = account[:-2] + account[-1]
        print(account)
else:
    print(account)
