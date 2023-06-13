import random


def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left = arr[:mid]
        rigth = arr[mid:]
        print(f"Dividing left: {left} rigth {rigth}")

        mergeSort(left)
        mergeSort(rigth)
        # Esta es una de las dudas que me surgió al intentar entender recursividad.
        print("¿Cuándo se ejecuta esta línea?")

        i = 0
        j = 0
        k = 0

        while i < len(left) and j < len(rigth):
        if left[i] < rigth[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = rigth[j]
            j += 1

        k += 1

        while i < len(left):
        arr[k] = left[i]
        i += 1
        k += 1

        while j < len(rigth):
        arr[k] = rigth[j]
        j += 1
        k += 1

        print(f'comparando izquierda {left}, derecha {rigth}')
        print(arr)
        print('-' * 50)

    return arr


if __name__ == '__main__':
    n = int(input('What is the length of the array? '))

    arr = [random.randint(0, 100) for i in range(n)]
    print(arr)
    print('-' * 20)
    ordered_arr = mergeSort(arr)
    print(ordered_arr)
