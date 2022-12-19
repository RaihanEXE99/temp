/*
Lab Class- 8 (Group- Q)
Date: 04-09-2022
18. Insert Into a Location in Linked List (04-09)

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int i = 1, n, item;

typedef struct list
{
    int info;
    struct list *link;
}node;

node *start = 0, *avail, *new_node;

void insertloc(int item, node *loc)
{
    if(avail == 0)
    {
        printf("OVERFLOWN\n");
        getch();
        exit(0);
    }

    new_node = avail;
    avail = avail -> link;

    new_node -> info = item;
    new_node -> link = loc -> link;

    loc -> link = new_node;
}

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

int main()
{
    node *loc;

    printf("Enter Number of Nodes: ");
    scanf("%d", &n);

    avail = (node *)malloc(sizeof(node));
    n++;
    create(avail);
    n--;

    printf("\nStart==> [%d]", start);
    printf("\nAvail List==> [%d]", avail);

    display(avail);


    for(i = 1; i <= n; i++)
    {
        printf("\nENter Item %d: ", i);
        scanf("%d", &item);
        insert(item);

        printf("\nStart: [%d]", start);
        display(start);

        printf("\nAvail List==> [%d]", avail);
        display(avail);
    }

    printf("\nLocation to Insert: ");
    scanf("%d", &loc);

    printf("Item to Insert: ");
    scanf("%d", &item);

    n++;
    insertloc(item, loc);

    printf("\nStart: [%d]", start);
    display(start);

    printf("\nAvail List==> [%d]", avail);
    display(avail);

    return 0;
}

/*
Sample Input/Output:

Enter Number of Nodes: 3

Start==> [0]
Avail List==> [4554656]-->{0, [3758512]}-->{0, [3758544]}-->{0, [3758576]}-->{0, [0]}
ENter Item 1: 5

Start: [4554656]-->{5, [0]}
Avail List==> [3758512]-->{0, [3758544]}-->{0, [3758576]}-->{0, [0]}
ENter Item 2: 4

Start: [3758512]-->{4, [4554656]}-->{5, [0]}
Avail List==> [3758544]-->{0, [3758576]}-->{0, [0]}
ENter Item 3: 2

Start: [3758544]-->{2, [3758512]}-->{4, [4554656]}-->{5, [0]}
Avail List==> [3758576]-->{0, [0]}
Location to Insert: 3758576
Item to Insert: 3

Start: [3758544]-->{2, [3758512]}-->{4, [4554656]}-->{5, [0]}
Avail List==> [0]

[Code is not working after inserting a node...]

*/
