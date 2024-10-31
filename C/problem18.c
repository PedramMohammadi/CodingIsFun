/*
This program takes as input a linked list and reverses it.
*/

#include <stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

void reverse(struct Node **head)
{
    struct Node *prev = NULL;
    struct Node *curr = *head;
    struct Node *temp;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    *head = prev;
}

int main()
{
    struct Node* head = NULL;
    reverse(&head);
    return 0;
}