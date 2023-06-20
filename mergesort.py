import random


def mergeSort(arr):
    new_array = arr
    if len(arr) > 2:
        half = len(arr)//2
        left = arr[:half]
        rigth = arr[half:]
        left = mergeSort(left)
        rigth = mergeSort(rigth)
        merged_array = rigth
        for number in left:
            number_index = 0
            for number2 in rigth:
                if number < number2:
                    number_index += 1
            merged_array.insert(number_index, number)
        return merged_array
    elif len(arr) > 1 and arr[0] < arr[1]:
        new_array = [arr[1], arr[0]]
    return new_array


arr = [3, 94, 86, 82, 90, 10, 87, 36, 61, 8, 17, 15, 22, 10, 23, 78, 25, 2, 30, 45, 98, 43, 98, 59, 53, 57, 2, 64, 1, 41, 32, 58, 19, 99, 60, 74, 48, 80, 44, 25, 68, 1, 89, 77, 60, 25, 99, 30, 76, 32,
       57, 82, 52, 44, 72, 87, 34, 87, 65, 30, 54, 6, 31, 33, 44, 44, 42, 82, 90, 17, 9, 98, 28, 86, 69, 3, 17, 8, 45, 98, 12, 47, 95, 43, 72, 39, 41, 82, 74, 56, 65, 79, 50, 26, 67, 100, 24, 67, 38, 57]
print("Original Array: ")
print(arr)
print("Sorted Array: ")
ordered_arr = mergeSort(arr)
print(ordered_arr)
