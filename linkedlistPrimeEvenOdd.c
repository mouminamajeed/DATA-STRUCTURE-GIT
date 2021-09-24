//cse 19 le 66
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node *head=NULL, *tail=NULL;
void create()
{
	int i,n;
	struct Node *temp;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter Data: ");
		scanf("%d", &temp->data);
		temp->next= NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
		tail->next=temp;
		tail=temp;}
	}
}
void view()
{
	struct Node *q;
	printf("the Given list :");
	q=head;
	while(q!=NULL)
	{
		printf("%d ",q->data);
		q=q->next;
	}
}
void even()
{
	struct Node *q;
	printf("THE EVEN NUMBERS IN THE ABOVE LIST ARE AS :");
	q=head;
	while(q!=NULL)
	{
		if(q->data%2==0)
		printf("%d ",q->data);
		q=q->next;
	}
}
void odd()
{
	struct Node *q;
	printf("THE ODD NUMBERS IN THE LIST ARE :");
	q=head;
	while(q!=NULL)
	{
		if(q->data%2!=0)
		printf("%d ",q->data);
		q=q->next;
	}
}

int isprime(int n)
{
	int i;
	if(n==2 || n==3)
	{
		return n;
	}
	else if(n==1 || n%2==0 ||n%3==0)
	{
		return -1;
	}
	else
	for(i=4;i=n/2;i++)
	if(n%i==0)
	return 1;
	else 
	return n;
	
}

void prime()
{
	struct Node *q;
	printf("PRIME NUMBERS  IN THE LIST:");
	q=head;
	while(q!=NULL)
	{
		int a=isprime(q->data);
		if(a!=-1)
		printf("%d ",q->data);
		q=q->next;
	}
}

int main()
{
	int ch;	
	while(1)
	{
	printf("\n press 1 To Create\n 2 to Display \n 3 for Exit \n 4 to display Even numbers \n 5 to display odd numbers \n 6 to find prime numbers in the list : \n");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	even();
	else if(ch==5)
	odd();
	else if(ch==6)
	prime();
    }
}
