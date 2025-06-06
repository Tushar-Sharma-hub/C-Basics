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

void indexdeletion(int arr[], int size, int index)
{
    for(int i=index;i < size;i++){
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8, index = 5;
    traversal(arr, size);
    indexdeletion(arr, size, index);
    size--;
    traversal(arr, size);
    return 0;
}