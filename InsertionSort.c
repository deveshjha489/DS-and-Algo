#include<stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;

}
int * createRandomArray(int *arr,int size)
{
    srand(time(0));
    for(int i=0; i<size; i++)
    {
        *(arr+i) = rand()%50;
    }
    return arr;
}

void printArray(int *arr,int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);

    }

}

int main()
{
    int b[5];
    int *a = createRandomArray(b,5);
    printf("Before Sort : ");
    printArray(a, 5);
    int j;
    for(int i=1; i<5; ++i)
    {
        j = i-1;
        if(*(a+i)<=*(a+j))
        {
            for(; j>=0; --j)
            {
                if(*(a+j+1)<=*(a+j))
                    swap(&a[j+1],&a[j]);
            }

        }

    }
    printf("\nAfter Sort : ");
    printArray(a, 5);

}
