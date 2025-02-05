
def insertionSort(arr, n):
    for i in range(1, n):
        curr = arr[i]
        prev = i - 1
        while prev >= 0 and arr[prev] > curr:
            arr[prev + 1] = arr[prev]
            prev -= 1
        arr[prev + 1] = curr

def printArray(arr, n):
    for i in arr:
        print(i, end=" ")
    print()

n = 5;
arr = [4,1,5,2,3]
insertionSort(arr, n)
printArray(arr, n)