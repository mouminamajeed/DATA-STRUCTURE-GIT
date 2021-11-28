#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void insert_beg();
void insert_end();
void insert_mid();
void delete();
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
		printf("\n \nenter your choice");
		printf("\n\n 1 for  create \n\n 2 for view \n\n 3 for inserting at the beginning \n\n 4 for inserting at the end \n\n 5 for inserting at any position \n \n 6 for deleting a node \n\n");
		printf("\nplease enter ur choice :");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:insert_beg();
			break;
			case 4:insert_end();
			break;
			case 5:insert_mid();
			break;
			case 6:delete();
			break;
			default :printf("\n you have entered the wrong choice try again!");
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
		printf("enter your data\n ");
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
			temp->next=head;
			tail=temp;
		}
	}
 } 
 //view or traverse function
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr->next!=head)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("%d\n\n",ptr->data);
 }
 //function for inserting at the beginning
  void insert_beg()
 {
 	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter info of node");
	scanf("%d",&ptr->data);
	ptr->next=head;
	head=ptr;
	tail->next=head;
 }
  // function for inserting node at the end
 void insert_end()
 {
 	struct node *ptr,*cpt;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the info of node");
	scanf("%d",&ptr->data);
	tail->next=ptr;
 ptr->next=head;
 tail=ptr;
 } 
  //function for inserting node at any position
 void insert_mid()
 {

 	int target;
 	struct node *ptr,*cpt;
 	ptr=(struct node *)malloc(sizeof(struct node));
 	printf("enter the element to be inserted\n");
	scanf("%d",&ptr->data);
	printf("enter the node after which you want to insert the data\n");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	cpt->next=ptr;
 }
 //function for deleting a node
 void delete()
  {
  	struct node *ptr,*cpt;
  	int item;
  	printf("enter the node to be deleted\n");
  	scanf("%d",&item);
  	if(head->data==item)                         //deleting head node
  	{
  		ptr=head;
  		head=head->next;
  		tail->next=head;
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
	        tail->next=head;
		  }
		  free(ptr);
	  }
	}

