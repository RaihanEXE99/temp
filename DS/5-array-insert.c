// 5. Write a C/C++ program to insert an element into an array.

#include<stdio.h>
int main()
{
    int arr[20] = {4, 3, 5, 1, 6};
    int i, pos, item, n = 5;

    printf("Before Inserting:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter The Position to Insert: ");
    scanf("%d", &pos);

    printf("Enter The Item: ");
    scanf("%d", &item);

    i = n;

    while(i >= pos - 1)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[pos - 1] = item;
    n = n + 1;

    printf("\nAfter Inserting:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}


/*
Sample Input/Output:

Before Inserting:
4 3 5 1 6
Enter The Position to Insert: 3
Enter The Item: 10

After Inserting:
4 3 10 5 1 6

*/

