#include<stdio.h>
#include<stdlib.h>
void create();
void view();
struct node   
{  
    char name[50];
    int age;
    float marks;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n enter your choice");
		printf("\n 1 for  create \n 2 for displaying the student details ");
		printf("\n please enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:view();
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
		printf("\n student %d",i+1);
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("\n enter the name of the student: ");
		scanf("%s",&temp->name);
		printf("\n enter the age of the student: ");
		scanf("%d",&temp->age);
		printf("\n enter the marks of the student: ");
		scanf("%f",&temp->marks);
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
 	printf("\n student details\n");
 	while(ptr!=NULL)
 	{
 		printf("student name =%s\t",ptr->name);
 		printf("student age =%d\t\t",ptr->age);
 		printf("student marks =%f\n",ptr->marks);
 		ptr=ptr->next;
	}
	printf("\n");
 }
