/*
Lab Class- 7 (Group- Q)
Date: 28-08-2022
16. Factorial

*/

#include<stdio.h>

int fact(int n)
{
    if((n ==0) || (n == 1))
        return 1;

    else
        return (n * fact(n - 1));
}

int main()
{
    int n = 4;

    printf("Factorial of %d is: %d\n", n, fact(n));

    return 0;
}


/*
Sample Input/Output:

Factorial of 4 is: 24

*/

