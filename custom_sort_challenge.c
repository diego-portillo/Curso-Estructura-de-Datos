// Custom Sort Algorithm
#include<stdio.h>
#include<stdlib.h>
// De Mayor a Menor
void custom_sort(int vector_entrada[],int n)
{
    int i, i2, i3, i4;
    int length = n;
    int* new_array = (int*)malloc(n * sizeof(int));
    int* indexes_array = (int*)malloc(n * sizeof(int));
        
    for(i=0;i<=n-1;i++)
    {
        // Elegimos el elemento de esta repetición
        int current_element = vector_entrada[i];
        int current_element_index = 0;
        // Comparamos este elemento con todos los elementos
        
        for(i2=0;i2<=n-1;i2++)
        {
            // Elegimos el elemento con el cual se va comparar
            int comparison_element =vector_entrada[i2];
            if(current_element<comparison_element){
                // Si el elemento actual es menor vamos desplazando su indice hacia el final
                current_element_index++;
            }
        }
        indexes_array[i] = current_element_index;
    }
    // finalmente, ubicamos cada elemento del array original
    // en su indice respectivo del array ordenado
    for(i3=0;i3<=n-1;i3++)
    {
        new_array[indexes_array[i3]] = vector_entrada[i3];
    }
    //Copiamos los valores ordenados a nuestro array origianal
    for(i4=0;i4<=n-1;i4++)
    {
        vector_entrada[i4] =  new_array[i4];
    }
    free(new_array);       // Free dynamically allocated memory
    free(indexes_array);   // Free dynamically allocated memory
}

int print_array(int vector_entrada[], int n)
{
    int i;
    for(i=0; i<=n-1;i++)
        printf("%d ", vector_entrada[i]);
    printf("\n");
}

main(int argc, char const *argv[])
{
    int test_array[]={-796,3229,-5164,-362,4408,8965,-6068,
9329,
-3034,
-443,
-6693,
9497,
2615};
    int n = sizeof(test_array)/sizeof(test_array[0]);
    printf("Array inicial: \n");
    print_array(test_array, n);
    custom_sort(test_array, n);
    printf("Array ordenado de mayor a menor: \n");
    print_array(test_array, n);
    return 0;
}