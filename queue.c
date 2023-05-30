#include<stdio.h>

#define SIZE 5
int values[SIZE];
int front = -1;
int rear = -1;

void imprimir(int v[]){
  for(int i=front; i<=rear; i++){
    printf("%d, ", v[i]);
  }
  printf("\n");
}

void enQueue(int value){
  if((rear - front) == SIZE-1)
  {
    printf("Nuestro Queue esta lleno ");
    imprimir(values);
  } else
  {
    if (front == -1)
    {
      front = 0;
    }
    rear++;
    values[rear] = value;
    printf("Se inserto el valor %d correctamente ", value);
    imprimir(values);
  }
}

void deQueue(){
  if(front == -1)
  {
    printf("Nuestro Queue esta vacio \n");
  } else
  {
    printf("Se elimino el valor %d correctamente ", values[front]);
    front++;
    imprimir(values);
    if(front > rear)
    {
      front = -1;
      rear = -1;
    }
  }
}

main(int argc, char const *argv[])
{
  enQueue(10);
  enQueue(20);
  enQueue(30);
  enQueue(40);
  enQueue(50);
  enQueue(60);
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  deQueue();
  enQueue(60);
  enQueue(70);
  enQueue(80);
  enQueue(90);
  enQueue(100);
  enQueue(110);




  return 0;
}