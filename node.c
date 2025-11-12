#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void insertAtFront(struct Node **head, int x)
{
    struct Node *newNode = createNode(x);
    newNode->next = *head;
    *head = newNode;
}

void deleteFromEnd(struct Node **head)
{
    if (*head == NULL)
        return;

    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node *temp = *head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void printList(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d", curr->data);
        if (curr->next != NULL)
            printf(" -> ");
        curr = curr->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);

    printf("Original list:\n");
    printList(head);

    int x = 1;
    insertAtFront(&head, x);
    printf("\nAfter inserting %d at the beginning:\n", x);
    printList(head);

    deleteFromEnd(&head);
    printf("\nAfter deleting from the end:\n");
    printList(head);

    return 0;
}
