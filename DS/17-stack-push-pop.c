// 9. Push & Pop Operation on a Stack (31-07-2022)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int item, top = 0, stack[21], maxtak = 5, i;

void push(int item)
{
    if(top == maxtak)
    {
        printf("\nOVERFLOWN\n");
        exit(0);
    }

    top++;
    stack[top] = item;

    for(i = 1; i <= maxtak; i++)
        printf("%d ", stack[i]);

    printf("\nTop: %d\n\n", top);
}

void pop()
{
    if(top == 0)
    {
        printf("\nUNDERFLOWN\n");
        exit(0);
    }

    stack[top] = 0;
    top--;
    stack[top];

    for(i = 1; i <= maxtak; i++)
        printf("%d ", stack[i]);

    printf("\nTop: %d\n\n", top);
}

int main()
{
    char pt;

    do
    {
        printf("If You Want To Push, Press-p");
        printf("\nIf You Want To Pop, Press-d");
        printf("\nIf You Want To exit, Press-e\n\n");

        pt = getch();

        if(pt =='p')
        {
            printf("Enter The Item: ");
            scanf("%d", &item);

            push(item);
        }

        if(pt == 'd')
            pop();

        if(pt == 'e')
            exit(0);

    } while(1);

    return 0;
}


/*

Sample Input/Output:

If You Want To Push, Press-p
If You Want To Pop, Press-d
If You Want To exit, Press-e
                                [Entered p]
Enter The Item: 5
5 0 0 0 0
Top: 1

If You Want To Push, Press-p
If You Want To Pop, Press-d
If You Want To exit, Press-e
                                [Entered p]
Enter The Item: 4
5 4 0 0 0
Top: 2

If You Want To Push, Press-p
If You Want To Pop, Press-d
If You Want To exit, Press-e
                                [Entered d]
5 0 0 0 0
Top: 1

If You Want To Push, Press-p
If You Want To Pop, Press-d
If You Want To exit, Press-e
                                [Entered e]
*/
