#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
  int data;
  struct Node* next;
};

// Insert at the beginning
void insert(struct Node** head_ref, int new_data) {
  // Allocate memory to a node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  // insert the data
  new_node->data = new_data;

  new_node->next = (*head_ref);

  // Move head to new node
  (*head_ref) = new_node;
}

// Delete a node
void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

void printList(struct Node* node) {
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;
  }
}

int main() {
  struct Node* head = NULL;
  insert(&head, 2);
  insert(&head, 3);
  insert(&head, 5);


  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);
}


/*
Sample Input/Output:

Linked list:  5  3  2 
After deleting an element:  5  2 

*/
