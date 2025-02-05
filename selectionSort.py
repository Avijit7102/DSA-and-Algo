
def selectionSort(arr, n):
    for i in range(n -1):
        smallest_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[smallest_index]:
                smallest_index = j
        arr[i], arr[smallest_index] = arr[smallest_index], arr[i]

def printArray(arr, n):
    for i in arr:
        print(i, end = " ")
    print()
n = 5
arr = [4,1,5,2,3]
selectionSort(arr, n)
printArray(arr, n)