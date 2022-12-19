/*
Lab Class- 6 (Group- Q)
Date: 21-08-2022
14. String Operations
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20]; 
    char ch1[40] = "Hello";
    char ch2[40] = " World!";
    
    printf("First String: %s\n", ch1);
    printf("Second String: %s\n\n", ch2);

    printf("Length of First String is: %d\n\n", strlen(ch1));

    strcpy(ch, ch1);
    printf("Copied String: %s\n\n", ch);

    if(strcmp(ch1, ch2) == 0)
        printf("Strings Are Equal\n\n");

    else
        printf("Strings Are Not Equal\n\n");

    printf("Concatenation String: %s\n\n", strcat(ch1, ch2));

    printf("Reversed of The Second String is: %s\n", strrev(ch2));

    return 0;
}


/*
Sample Input/Output:

First String: Hello
Second String:  World!

Length of First String is: 5

Copied String: Hello

Strings Are Not Equal

Concatenation String: Hello World!

Reversed of The Second String is: !dlroW

*/

