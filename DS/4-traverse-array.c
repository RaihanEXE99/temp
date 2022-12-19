// 4. Write a C/C++ program to traverse an array.

#include<stdio.h>
int main()
{
    int a[10] = {5, 2, 6, 8, 3};
    int i, lb = 0, ub = 5;

    printf("Traversing Array:\n");

    for(i = lb; i < ub; i++)    // Using For Loop
        printf("%d ", a[i]);

    /*
    // Using While Loop

    i = lb;
    while(i < ub)
    {
        printf("%d ", a[i]);
        i++;
    }
    */

    printf("\n");

    return 0;
}

/*
Sample Input/Output:

Traversing Array:
5 2 6 8 3

*/
