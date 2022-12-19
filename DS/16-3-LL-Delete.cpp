#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void addLast(struct node **head, int val)
{
    struct node *newNode = new struct node;
    newNode->data = val;
    newNode->next     = NULL;
    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *lastNode = *head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}
void deleteNode(struct node **head, int key)
{
      struct node *temp;
      if((*head)->data == key)
      {
          temp = *head;
          *head = (*head)->next;
          free(temp);
      }
      else
      {
          struct node *current  = *head;
          while(current->next != NULL)
          {
              if(current->next->data == key)
              {
                  temp = current->next;
                  current->next = current->next->next;
                  free(temp);
                  break;
              }
              else
                  current = current->next;
          }
      }
}
void printList(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
         cout << temp->data << "->";
         temp = temp->next;
    }
    cout <<"NULL\n";
}
int main()
{
     struct node *head = NULL;

     addLast(&head,10);
     addLast(&head,20);
     addLast(&head,30);
     cout << "Linked List Elements:\n";
     printList(head);

     //delete A node
     deleteNode(&head,20);
     cout << "Deleted 20. The New Linked List:\n";
     printList(head);
     return 0;
}


/*
Sample Input/Output:

Linked List Elements:
10->20->30->NULL
Deleted 20. The New Linked List:
10->30->NULL

*/