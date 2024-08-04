n, t = map(int, input().split())
books = list(map(int, input().split()))
prefix = [0] * (n + 1)
start, end, current_time, max_books = 0, 0, 0, 0
while end < n:
    current_time += books[end]
    while current_time > t:
        current_time -= books[start]
        start += 1
    max_books = max(max_books, end - start + 1)
    end += 1
print(max_books)
