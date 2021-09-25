#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void ascending();
void descending();
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
		printf(" your choices");
		printf("\n 1 for  creating the linked list \n 2 for view \n 3 FOR SORTING THE LIST IN ASCENDING ORDER\n 4 for SORTING THE LIST IN DESCENDING ORDER :");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:ascending();
			break;
			case 4:descending();
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
  
  //function to sort THE list in ASCENDING order
  void ascending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data>cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  
    }
    	 printf("elements after sorting in ascending order\n");
	 view();	  
}
    
    
    //function to sort LIST IN DESCENDING order
  void descending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data<cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  	  
    }
     printf("elements after sorting in descending order\n");
printf("\n");
    view();  
}

