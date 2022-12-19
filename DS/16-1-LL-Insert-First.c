/*
Lab Class- 8 (Group- Q)
Date: 04-09-2022
17.Insert Into Linked List First Node
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int i, n, item;

typedef struct list
{
    int info;
    struct list *link;
}node;

node *start = 0, *avail, *new_node;

void insert(int item)
{
    if(avail == 0)
    {
        printf("OVERFLOW\n");
        getch();
        exit(0);
    }

    new_node = avail;
    avail = avail -> link;

    new_node -> info = item;
    new_node -> link = start;

    start = new_node;
}

void create(node *pt)
{
    if(i == n)
    {
        pt -> info = 0;
        pt -> link = 0;
    }

    else
    {
        pt -> info = 0;
        pt -> link = (node *)malloc(sizeof(node));

        i = i + 1;

        create(pt -> link);
    }
}

void display(node *pt)
{
    printf("-->{%d, ", pt -> info);
    printf("[%d]}", pt -> link);

    if(pt -> link != 0)
        display(pt -> link);
}

void main()
{
    printf("Enter Number of Nodes: ");
    scanf("%d", &n);

    avail = (node *)malloc(sizeof(node));
    create(avail);

    printf("\nStart==> [%d]\n", start);
    printf("Avail List==> [%d]", avail);
    display(avail);

    for(i =1; i<= n; i++)
    {
        printf("\nEnter Item %d: ", i);
        scanf("%d", &item);
        insert(item);

        printf("\nStart: [%d]", start);
        display(start);

        printf("\nAvail List==> [%d]", avail);
        display(avail);
    }

}


/*
Sample Input/Output:

Enter Number of Nodes: 3

Start==> [0]
Avail List==> [3112864]-->{0, [5724608]}-->{0, [5724640]}-->{0, [5724672]}-->{0, [0]}
Enter Item 1: 4

Start: [3112864]-->{4, [0]}
Avail List==> [5724608]-->{0, [5724640]}-->{0, [5724672]}-->{0, [0]}
Enter Item 2: 3

Start: [5724608]-->{3, [3112864]}-->{4, [0]}
Avail List==> [5724640]-->{0, [5724672]}-->{0, [0]}
Enter Item 3: 2

Start: [5724640]-->{2, [5724608]}-->{3, [3112864]}-->{4, [0]}
Avail List==> [5724672]-->{0, [0]}

*/
