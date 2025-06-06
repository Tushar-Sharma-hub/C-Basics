#include <stdio.h>

void traversal(int arr[], int n)
{
    // traversal of arrays
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for inserting elements
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8, element = 45, index = 5, capacity = 100;
    traversal(arr, size);
    int result = indexInsertion(arr, size, element, capacity, index);
    if (result == 1) {
        size++;
        traversal(arr, size);
    } else {
        printf("Error: could not insert element\n");
    }
    return 0;
}