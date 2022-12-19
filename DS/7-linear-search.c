// Linear Search
// 24-07-2022
// Lab Class- 3
// Group Q (Roll: 061 - 125)

#include<stdio.h>

int main()
{      // Location: 1   2  3   4  5  6
    int data[10] = {10, 6, 12, 5, 2, 7};
    int item, loc, n = 5;

    printf("Enter Item= ");
    scanf("%d", &item);

    data[n + 1] = item;
    loc = 0;

    while(data [loc] != item)
    {
        loc = loc + 1;
    }

    if(loc == n + 1)
        printf("Item Not Found.\n");
    
    else
        printf("Item Found\nLocation= %d\n", loc + 1);

    return 0;
}


// Sample Output:

// Enter Item= 12
// Item Found
// Location= 3


/* 

//Alternative Code of Linear Search

#include<stdio.h>

int main()
{      // Location: 1   2  3   4  5  6
    int data[10] = {10, 6, 12, 5, 2, 7};
    int item, loc, k, n = 5;

    printf("Enter Item= ");
    scanf("%d", &item);

    k = 0;
    loc = 0;

    while(loc == 0 && k <= n)
    {
        if(item == data[k])
            loc = k + 1;

        k = k + 1;
    }

    if(loc == 0)
        printf("Item Not Found.\n");
    
    else
        printf("Item Found\nLocation= %d\n", loc);

    return 0;
}

*/

