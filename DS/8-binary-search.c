// Binary Search
// 24-07-2022
// Lab Class- 3
// Group Q (Roll: 061 - 125)

#include<stdio.h>
int main()
{      // Location: 1   2   3   4   5   6    7
    int data[10] = {10, 15, 18, 25, 30, 33, 40};
    int item, beg, end, mid, lb = 0, ub = 6;
    
    beg = lb, end = ub;
    mid = (beg + end) / 2;

    printf("Enter The Item= ");
    scanf("%d", &item);

    while((data[mid] != item) && (beg <= end))
    {
        if(item < data[mid])
            end = mid - 1;

        else
            beg = mid + 1;

        mid = (beg + end) / 2;
    }

    if(data[mid] == item)
        printf("Item Found\nLocation= %d\n", mid + 1);

    else
        printf("Item not Found\n");

    return 0;
}


// Sample Output:
// Enter The Item= 30
// Item Found
// Location= 5

