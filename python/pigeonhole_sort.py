# pigeonhole sort algorihtm

def pigeonhole_sort(arr):
    min_val = min(arr)
    max_val = max(arr)
    size = max_val - min_val + 1
    holes = [[] for _ in range(size)]
    for x in arr:
        holes[x - min_val].append(x)
    i = 0
    for bucket in holes:
        for x in bucket:
            arr[i] = x
            i += 1
    return arr

arr = [8, 3, 2, 7, 4, 6, 8]
print(pigeonhole_sort(arr))
