/*
Lab Class- 9 (Group Q)
19. Tower of Hanoi (11-09-22)
*/

#include<stdio.h>
#include<conio.h>

int c = 0;

void tower(int n, char beg, char aux, char end)
{
    if(n == 1)
    {
        printf("%d: %c --> %c\n", ++c, beg, end);
        return;
    }

    tower(n - 1, beg, end, aux);
    printf("%d: %c --> %c\n", ++c, beg, end);
    tower(n - 1, aux, beg, end);

    return;
}

int main()
{
    int n;
    char beg = 'A', aux = 'B', end = 'C';

    printf("Enter Number of Disk: ");
    scanf("%d", &n);

    tower(n, beg, aux, end);

    return 0;
}


/*
Sample Input/Output:

Enter Number of Disk: 3
1: A --> C
2: A --> B
3: C --> B
4: A --> C
5: B --> A
6: B --> C
7: A --> C

*/

