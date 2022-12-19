/* 
Lab Class- 5 (14-08-2022)
10. Insert Any Queue & Also Delete From Queue
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int front = 0, queue[15], n = 5, rear = 0, item, j;

void qinsert()
{
    if(((front == 1) && (rear == n)) || (front == rear + 1))
    {
        printf("OVERFLOWN");
        getch();
        exit(0);
    }

    if(front == 0)
    {
        front = 1;
        rear = 1;
    }

    else
    {
        if(rear == n)
            rear = 1;

        else
            rear = rear + 1;
    }

    printf("\n\nEnter Your Item: ");
    scanf("%d", &item);
    queue[rear] = item;
}

void qdel()
{
    if(front == 0)
    {
        printf("UNDERFLOWN");
        getch();
        exit(0);
    }

    queue[front] = 0;

    if(front == rear)
    {
        front = 0;
        rear = 0;
    }

    else
    {
        if(front == n)
            front = 1;

        else
            front =front + 1;
    }
}

void display()
{
    printf("\nQUEUE\n");
    printf("-----\n");

    for(j = 1; j <= n; j++)
        printf("%d ", queue[j]);

    printf("\n\nFRONT= %d\n", front);
    printf("REAR= %d\n", rear);
}


int main()
{
    char c;

    for(j = 1; j <= n; j++)
        queue[j] = 0;

    step1:
    printf("\nEnter i For Insert\n");
    printf("Enter d for Delete\n");
    printf("Enter e For Exit\n");

    c = getch();
    display();

    if(c == 'i')
    {
        qinsert();
        display();
        goto step1;
    }

    if(c == 'd')
    {
        qdel();
        display();
        goto step1;
    }

    if(c == 'e')
        exit(0);

    else
        goto step1;

    return 0;
}


/*

Sample Input/Output:

Enter i For Insert
Enter d for Delete
Enter e For Exit
                    [Pressed i]
QUEUE
-----
0 0 0 0 0

FRONT= 0
REAR= 0


Enter Your Item: 5

QUEUE
-----
5 0 0 0 0

FRONT= 1
REAR= 1

Enter i For Insert
Enter d for Delete
Enter e For Exit
                    [Pressed i]
QUEUE
-----
5 0 0 0 0

FRONT= 1
REAR= 1


Enter Your Item: 2

QUEUE
-----
5 2 0 0 0

FRONT= 1
REAR= 2

Enter i For Insert
Enter d for Delete
Enter e For Exit
                    [Pressed d]
QUEUE
-----
5 2 0 0 0

FRONT= 1
REAR= 2

QUEUE
-----
0 2 0 0 0

FRONT= 2
REAR= 2

Enter i For Insert
Enter d for Delete
Enter e For Exit
                    [Pressed e]
QUEUE
-----
0 2 0 0 0

FRONT= 2
REAR= 2

*/
