// 5. Write a C/C++ program to insert an element into an array.

#include<stdio.h>
int main()
{
    int arr[20] = {4, 3, 5, 1, 6};
    int i, pos, item, n = 5;

    printf("Before Deleting:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter The Position to Delete: ");
    scanf("%d", &pos);

    item = arr[pos];

    for(i = pos - 1; i < n; i++)
        arr[i] = arr[i + 1]; 

    n = n - 1;

    printf("\nAfter Deleting:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}


/*
Sample INput/Output:

Before Deleting:
4 3 5 1 6
Enter The Position to Delete: 3

After Deleting:
4 3 1 6

*/