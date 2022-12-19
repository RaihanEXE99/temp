//Search an item from an array.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i, n, *la[40], temp[25];

    printf("\nEnter How Many Item: ");
    scanf("%d", &n);

    n++;

    printf("\nEnter %d Item: ", n - 1);

    for(i = 1; i< n; i++)
    {
        scanf("%d", &temp[i]);
        la[i] = &temp[i];
    }

    int item, loc = 1;

    printf("Enter The Item to Find Location: ");
    scanf("%d", &item);

    la[n] = &item;

    int temp1 = *la[loc];

    while(temp1 != item)
    {
        loc = loc + 1;
        temp1 = *la[loc];
    }

    if(loc == n)
    {
        loc = 0;
        printf("LOC: %d\n", loc);
    }

    else
    {
        printf("\n\nLOC: %d", loc);
        printf("\n\nYour Given Item: %d\n", item);
    }

    return 0;
}



// Sample Output:

// Enter How Many Item: 4

// Enter 4 Item: 10 20 30 40
// Enter The Item to Find Location: 30


// LOC: 3

// Your Given Item: 30

