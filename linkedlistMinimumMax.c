#include<stdio.h> 
struct Node *head=NULL; 
struct Node 
{ 
    int value; 
    struct Node *next; 
}; 
struct Node * createNode(int item) 
{ 
    struct Node *n=malloc(sizeof(struct Node)); 
    n->value=item; 
    n->next=NULL; 
    return n; 
} 
void addNode(int item) 
{ 
    struct Node *n,*M; 
    n=createNode(item); 
    if(head==NULL) 
    { 
        head=n; 
    } 
    else 
    { 
        M=head; 
        while(M->next!=NULL) 
        { 
            M=M->next; 
        } 
        M->next=n; 
    } 
} 
int maximum() 
{ 
    int maximum=head->value; 
    struct Node *M=head; 
    while(M!=NULL) 
    { 
        if(maximum<M->value) 
        { 
            maximum=M->value; 
        } 
        M=M->next; 
    } 
    return maximum; 
} 
 
int minimum() 
{ 
    int minimum=head->value; 
    struct Node *M=head; 
    while(M!=NULL) 
    { 
        if(minimum>M->value) 
        { 
            minimum=M->value; 
        } 
        M=M->next; 
    } 
    return minimum; 
} 
void main() 
{ 
    int limit,val,i=0; 
    printf("Enter limit of linked List : "); 
    scanf("%d",&limit); 
    printf("\nEnter value : "); 
    scanf("%d",&val); 
    addNode(val); 
    while(i<limit-1) 
    { 
			printf("\nEnter value : "); 
			scanf("%d",&val); 
			addNode(val); 
			i++; 
    } 
 
    printf("\nLargest element of the list is : %d",maximum()); 
    printf("\n\nSmallest element of the list is : %d\n",minimum()); 
}
