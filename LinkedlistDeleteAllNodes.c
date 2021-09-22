#include <stdio.h>
#include <stdlib.h>
struct node
 {
    int data;          
    struct node *next;
} *head;
void create(int n);
void delete();
void display();
int main()
{
    int n, ch;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("\n Data in the list \n");
    display();
    printf("\n Press 1 to delete entire list: ");
    scanf("%d", &ch);

    delete();//dlt all nodes
    printf("\n Data in the list \n");
    display();
    return 0;
}

void create(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL; 
        temp = head;

        /*
         * Create n nodes and adds to linked list
         */
        for(i=2; i<=n; i++)//add n nodes
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; // Link previous node  temp to the newNode
                temp = temp->next;
            }
        }

        printf("LINKED LIST CREATED \n");
    }
}

void delete()//dlt all nodes
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("LIST DELETED \n");
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("/n List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); //ata of current node
            temp = temp->next;                 // Move to next node
        }
    }
}


