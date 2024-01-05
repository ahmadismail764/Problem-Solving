def palindrome_checker(string):
    if len(string) % 2 == 0:
        string1 = string[:len(string)//2]
        string2 = string[len(string)//2:]
        string2 = string2[::-1]
        return string1 == string2
    else:
        string1 = string[:len(string)//2]
        string2 = string[len(string)//2 + 1:]
        string2 = string2[::-1]
        return string1 == string2


string = input()
print(string if palindrome_checker(string) else string + string[::-1])
