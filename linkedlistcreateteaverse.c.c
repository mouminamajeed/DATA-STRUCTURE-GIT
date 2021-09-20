#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;          
    struct node *next; 
}*head;
void create(int n);
void trav();
int main()
{
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    create(n);

    printf("\n the Data in the list is \n");
    trav();
    return 0;
}

void create(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)//teminated if memory is not allocated
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        if(newNode == NULL)//If memory is not allocated for newNode
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link to newNode
        newNode->next = NULL; //new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}


//view
void trav()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n",temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
