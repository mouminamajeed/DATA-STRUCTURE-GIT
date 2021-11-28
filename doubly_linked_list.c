#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void insertmid();
void insertbeg();
void insertend();
void delete();
struct node   
{  
    int data;  
    struct node *next;  
    struct node *prev; 
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("enter your choice");
		printf("\n 1 for  create \n 2 for view \n 3 for inserting at the beginning \n 4 for inserting at the end \n 5 for inserting at any position \n 6 for deleting a node ");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insertbeg();
			break;
			case 4:insertend();
			break;
			case 5:insertmid();
			break;
			case 6:delete();
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
        temp->prev=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
            temp->prev=tail;
			tail=temp;
		}
	}
 } 
 //view or traverse function
 void view()
 {
     printf("forward traverse:");
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");

     printf("backward traverse:");
 	ptr=tail;
 	while(ptr!=head)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->prev;
	}
	printf("%d",head->data);
	printf("\n");
 }
 //function for inserting node at any position
 void insertmid()
 {

 	int target;
 	struct node *ptr,*cpt;
 	ptr=(struct node *)malloc(sizeof(struct node));
 	printf("enter the element to be inserted");
	scanf("%d",&ptr->data);
	printf("enter the node after which you want to insert the data");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	ptr->prev=cpt;
	cpt->next->prev=ptr;
	cpt->next=ptr;
 }
 // function for inserting node at the beginning
 void insertbeg()
 {
 	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter info of node");
	scanf("%d",&ptr->data);
	ptr->next=head;
	ptr->prev=NULL;
	head->prev=ptr;
	head=ptr;
 }
 // function for inserting node at the end
 void insertend()
 {
 	struct node *ptr,*cpt;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the info of node");
	scanf("%d",&ptr->data);
	cpt=head;
	while(cpt->next!=NULL)
      {
     	cpt=cpt->next;
       }
	cpt->next=ptr;
	ptr->prev=cpt;
	ptr->next=NULL;
	tail=ptr;
  } 
  // function for deleting a node
  void delete()
  {
  	struct node *ptr,*cpt;
  	int item;
  	printf("enter the node to be deleted");
  	scanf("%d",&item);
  	if(head->data==item)      //deleting head node
  	{
  		ptr=head;
  		head=head->next;
  		free(ptr);
    }
	  else 
	  {
	  	ptr=head;      //deleting other nodes
	  	while(ptr->data!= item)
		  {
		  	cpt=ptr;
		  	ptr=ptr->next;
		  }
		  cpt->next=ptr->next;
		  if(ptr==tail)         //deleting tail node
		  {
		  	tail=cpt;
		  }
		  free(ptr);
	  }
	
  }
 
