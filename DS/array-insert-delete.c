//Insertion & deletation operation of a linear array.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i, j, item, la[27], p, n;

int insert(int n, int item, int p)    //Insert Function
{
    j = n;

    while(j >= p)
    {
        la[j + 1] = la[j];
        j = j - 1;
    }

    la[p] = item;
    n = n +1;

    printf("\n\nAfter Insertion......\n\n");

    for(i = 1; i <= n; i++)
        printf("%d ", la[i]);

    return 0;
}

int delete(int n, int p)            //Delete Function
{
    while(p <= n)
    {
        la[p] = la[p + 1];
        p = p + 1;
    }

    n = n - 1;

    printf("\n\nAfter Deletation......\n\n");

    for(i = 1; i <= n; i++)
        printf("%d ", la[i]);
}

int main()
{
    printf("How many number you want to take: ");
    scanf("%d", &n);
    printf("\nEnter %d Item: ", n);

    for(i = 1; i <= n; i++)
        scanf("%d", &la[i]);

    do
    {
        printf("\n\nDo You want to insert.y/n? ");

        if(getch() == 'y')
        {
            printf("\n\nEnter the position you want to insert: ");
            scanf("%d", &p);

            printf("\nEnter the item: ");
            scanf("%d", &item);

            insert(n, item, p);
            n = n + 1;
        }

        else
        {
            printf("\n\nDo you want to delete. y/n? ");

            if(getch() == 'y')
            {
                printf("\n\nEnter the position you want to Delete: ");
                scanf("%d", &p);

                delete(n, p);
                n = n - 1;
            }

            else
                exit(0);
        }
    }
    while(1);

}


// Sample Output:

// How many number you want to take: 4

// Enter 4 Item: 10 20 30 40


// Do You want to insert.y/n?                  (Entered y)

// Enter the position you want to insert: 2

// Enter the item: 15


// After Insertion......

// 10 15 20 30 40

// Do You want to insert.y/n?                  (Entered n)

// Do you want to delete. y/n?                 (Entered y)

// Enter the position you want to Delete: 4


// After Deletation......

// 10 15 20 40

// Do You want to insert.y/n?                  (Entered n)

// Do you want to delete. y/n?                 (Entered n)

// (End of output)

