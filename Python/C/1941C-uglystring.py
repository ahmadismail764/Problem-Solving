t = int(input())
for _ in range(t):
    n = int(input())
    word = input()
    counter = 0
    print(
        word.count("map") + word.count("pie")
        if "mapie" not in word
        else word.count("map") + word.count("pie") - word.count("mapie")
    )
