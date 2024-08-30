def find_first(arr, x):
    start, end = 0, len(arr) - 1
    index = float('inf')
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] < x:
            start = mid + 1
        else:
            if arr[mid] == x:
                index = min(index, mid)
            end = mid - 1
    return index


def find_last(arr, x):
    start, end = 0, len(arr) - 1
    index = float('-inf')
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] > x:
            end = mid - 1
        else:
            if arr[mid] == x:
                index = max(index, mid)
            start = mid + 1
    return index


n = int(input())
orig_arr = list(map(int, input().split()))

q = int(input())
for _ in range(q):
    start, end, x = map(int, input().split())
    start -= 1
    end -= 1
    new = sorted(orig_arr[start:end + 1])
    first_index = find_first(new, x)
    last_index = find_last(new, x)
    print(first_index, last_index)
    if first_index == float('inf') or last_index == float('-inf'):
        print(0)
    else:
        print(last_index - first_index + 1)
