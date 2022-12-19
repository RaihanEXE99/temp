/*
Lab Class- 7 (Group- Q)
Date: 28-08-2022

15. Matrix Multiplication (28-8)

*/

#include<stdio.h>

int main()
{
    int c [3][3] = {0}, i, j, k, m = 3, n = 3, p = 3;

    int a [3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int b [3][3] = {{3, 2, 1}, {3, 2, 1}, {3, 2, 1}};

    printf("The First Matrix:\n\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    printf("\nThe Second Matrix:\n\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", b[i][j]);

        printf("\n");
    }

    printf("\nMatrix Multiplication:\n\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < p; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }

         printf("%d ", c[i][j]);

        }

        printf("\n");
    }

    return 0;
}


/*
Sample Input/Output:

The First Matrix:

1 2 3
1 2 3
1 2 3

The Second Matrix:

3 2 1
3 2 1
3 2 1

Matrix Multiplication:

18 12 6
18 12 6
18 12 6

*/