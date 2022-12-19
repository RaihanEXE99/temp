// 3. A program that finds the location of the first occurrence 
// of a given pattern in a given text. (17-07-2022)
// (First Pattern Matching) 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    char p[20], t[40];
    int r, s, max, k, l, index = 0;

    printf("Enter a String: ");
    gets(t);

    printf("Select a Pattern: ");
    gets(p);

    r = strlen(p);
    s = strlen(t);
    max = s - r + 1;

    k = 1;

    while(k <= max)
    {
        for(l = 0; l < r; l++)
        {
            if(p[l] != t[k + l - 1])
                goto increament;
        }

        index = k;
        printf("Index: %d\n", index);
        exit(0);            // Program terminated

        increament: k++;    // goto statement
    }

    printf("Pattern Matching Failure.\n");  // index = 0

    return 0;
}


// Sample Output:

// Enter a String: ababcbc
// Select a Pattern: abc
// Index: 3

