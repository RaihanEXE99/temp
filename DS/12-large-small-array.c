// 8. Find Maximum and Minimum Element in Array (31-07-2022)

#include<stdio.h>

int main()
{
    int arr[100], i, max, min, n;

    printf("Find Maximum & Minimum Element in An Array:\n");
    printf("-------------------------------------------\n");

    printf("Input The Number of Elements To Be Stored in The Array: ");
    scanf("%d", &n);

    printf("Input %d Elements in The Array: ", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum: %d\nMinimum: %d\n", max, min);

    return 0;
}


/*
Sample Input/Outpput:

Find Maximum & Minimum Element in An Array:
-------------------------------------------
Input The Number of Elements To Be Stored in The Array: 5
Input 5 Elements in The Array: 4 3 5 1 2

Maximum: 5
Minimum: 1
*/

