# radix sort algorithm 

def counting_sort_exp(arr, exp):
    n = len(arr)
    output = [0] * n
    count = [0] * 10

    for i in arr:
        index = (i // exp) % 10
        count[index] += 1
    for i in range(1, 10):
        count[i] += count[i-1]
    for i in reversed(arr):
        index = (i // exp) % 10
        output[count[index] - 1] = i
        count[index] -= 1
    for i in range(n):
        arr[i] = output[i]

def radix_sort(arr):
    max_el = max(arr)
    exp = 1
    while max_el // exp > 0:
        counting_sort_exp(arr, exp)
        exp *= 10
    return arr

arr = [170, 45, 75, 90, 802, 24, 2, 66]
print(radix_sort(arr))
