# bucket sort algorithm 

def bucket_sort(arr):
    n = len(arr)
    buckets = [[] for _ in range(n)]
    for num in arr:
        idx = int(num * n)
        buckets[idx].append(num)
    for i in range(n):
        buckets[i].sort()
    result = []
    for bucket in buckets:
        result.extend(bucket)
    return result

arr = [0.897, 0.565, 0.656, 0.123, 0.665, 0.343]
print(bucket_sort(arr))
