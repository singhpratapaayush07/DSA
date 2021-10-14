#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

//modify that's why the call by reference and x is number we want to append
void Append(struct Array *arr, int x) 
{
    if (arr->length < arr->size) //if length is less than size
    {
        arr->A[arr->length++] = x; //x will be added to array
    }
}

void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5}; //{{elements}, size, length}
    Append(&arr, 10);
    Display(arr);
    return 0;
}
