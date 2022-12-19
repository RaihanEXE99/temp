// 7. Fibonacci Series (31-07-2022)

#include<stdio.h>

int fibonacci(int);

int main()
{
    int n, i, k = 0;

    printf("Enter Series Length: ");
    scanf("%d", &n);

    printf("Fibonacci Series\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(k));
        k++;
    }
    printf("\n");

    return 0;
}

int fibonacci(int n)
{
    if(n == 0)
        return 0;

    else if(n == 1)
        return 1;

    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}



/*
Sample Input/Output:
Enter Series Length: 5
Fibonacci Series
0 1 1 2 3
*/

