
def bubbleSort(arr, n):
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def printArray(arr, n):
    for i in arr:
        print(i, end = " ")
    print()

n = 5
arr = [4,1,5,2,3]
bubbleSort(arr, n)
printArray(arr, n)