#include <stdio.h>

void takeInput(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void display(int array[], int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d ,", array[i]);
    }
    printf("]\n");
}