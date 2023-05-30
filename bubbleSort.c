#include<stdio.h>

void cambiar_posicion(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubble_sort(int vector_entrada[],int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j < n-i-1; j++)
        {
            if(vector_entrada[j]>vector_entrada[j+1]){
                cambiar_posicion(&vector_entrada[j], &vector_entrada[j+1]);
            }
        }
    }
}

int print_array(int vector_entrada[], int n)
{
    int i;
    for(i=0; i<n-1;i++)
        printf("%d ,", vector_entrada[i]);
    printf("\n fin del ordenamiento");
    
}

main(int argc, char const *argv[])
{
    int vector_entrada[]={100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
    bubble_sort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");
    return 0;
}