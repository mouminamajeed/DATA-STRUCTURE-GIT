//cse 19 le 66
#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void insert();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("enter your choice");
		printf("\n 1 for  create \n 2 for view \n 3 for inserting a node ");
		printf("\n please enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insert();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}
}
//create funtion
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 
 //view or traverse function
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
 //function for inserting node before or after a particular node
 void insert()
 {

 	int target,n;
 	struct node *ptr,*cpt,*trav;
 	ptr=(struct node *)malloc(sizeof(struct node));
 	printf("enter the element to be inserted : ");
	scanf("%d",&ptr->data);
	printf("\n press 1 for inserting before a particular node\n press 2 for inserting after a particular node");
	printf("\nenter your choice:");
	scanf("%d",&n);
	if(n==1)
	{
	printf("enter the node before which you want to insert the data: ");
	scanf("%d",&target);
	if(head->data==target)
	{
		ptr->next=head;
	    head=ptr;	
	}
	else
	{
	cpt=head;
	while(cpt->data!=target)
	{
		trav=cpt;
		cpt=cpt->next;
	}
	ptr->next=cpt;
	trav->next=ptr;
    }
   }
	if(n==2)
	{
	printf("enter the node after which you want to insert the data: ");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	cpt->next=ptr;
 }		
}
