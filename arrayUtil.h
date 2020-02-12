#include<stdio.h>
int * createRandomArray(int *arr,int size)
{
    srand(time(0));
    for(int i=0; i<size; i++)
    {
        *(arr+i) = rand()%50;
    }
    return arr;
}

void printArray(int *arr, int size){
    for(int i=0;i<size;++i)
    printf("%d ", arr[i]);
}
