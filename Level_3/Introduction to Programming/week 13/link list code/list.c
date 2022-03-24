/* menu driven program for the link list*/
#include <stdio.h>
#include <malloc.h>
#include<process.h>

void InsertAtBeginning();
void InsertAtEnd(); 
int InsertAtAnyPosition();
void Display();
void DeleteAtBegining();
void DeleteAtEnd();
int DeletingAtAnyPosition();

struct node{
	int data; struct node *next;
};
struct node *start=NULL, *q,*t;

int main()
{

int ch=100;

while(ch !=8 )
{
	printf("\n ----------------Menu----------\n");
	printf("1.Insert At Beginning of the list \n");
	printf("2.Insert At Beginning of the end \n");
	printf("3.Insert At position of your choice \n");
	printf("4.display \n");
	printf("5.Delete data at begining \n");
	printf("6.Delete data at end \n");
	printf("7.Delete data at any position\n");
	printf("8.End \n");
	printf("Enter yout choice from 1-8\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: InsertAtBeginning();
		break;
		case 2: InsertAtEnd();
		break;
		case 3: InsertAtAnyPosition();
		break;
		case 4: Display();
		break;
		case 5: DeleteAtBegining();
		break;
		case 6: DeleteAtEnd();
		break;
		case 7: DeletingAtAnyPosition();
		break;
		case 8:
			exit(0);
			default:
				printf("Invalid choice!(Valid-1 to 8) ");
	
	}
}	
return 0;

}

void InsertAtBeginning()
{ 
int num;
t=(struct node*)malloc(sizeof(struct node));
printf("enter data :");
scanf("%d",&num);
t->data= num;
if(start == NULL)// if the head is at null,the list is empty 
{
t->next=NULL;
start=t;
}
else{
t->next=start;
start=t;
}
}

void InsertAtEnd()
{
	int num;
	t=(struct node*)malloc(sizeof(struct node));
printf("enter data :");
scanf("%d",&num);
t->data= num;
t->next=NULL;
if(start == NULL)// if the head is at null,the list is empty 
{

start=t;
}
else
{
	q=start;
	while (q->next !=NULL)
	q=q->next;
	q->next=t;
}

}

int InsertAtAnyPosition()
{
int pos,i,num;
if(start==NULL)
{
	printf("List is empty!! ");
	return 0;
}
t=(struct node*)malloc(sizeof(struct node));
printf("Enter the data :");
scanf("%d", &num);
printf("Enter the position to insert:");
scanf("%d",&pos);
t->data= num;
q=start;
for(i=1;i<pos-1;pos++)
{
	if(q->next==NULL)
	{
		printf("There is less elements in the list");
		return 0;
	}
	q=q->next;
}
t->next=q->next;
q->next =t;
	return 0;
}

void Display()
{
	if(start==NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("The linked list is \n");
		for(q=start;q!=NULL; q=q->next)
		{printf("%d->", q->data);
		}
	}
	printf("\n press any key to continue...");
	
}

void DeleteAtBegining()
{ 
if(start==NULL)
{
 printf("The list is empty!");
}
else
{
	q=start;
	start= start->next;
	free(q);
	printf("Element deleted!");
}
}

void DeleteAtEnd()
{
	if(start==NULL)
	{
		printf("the list is empty");
	}
	else
	{
		q=start;
		while(q->next->next != NULL)
		q=q->next;
		t=q->next;
		q->next=NULL;
		free(t);
		printf("element deleted");
	}
}

int DeletingAtAnyPosition()
{
	int pos,i;
	if(start==NULL)
	{
		printf("List is empty!");
		return 0;
	}
	printf("Enter the position to delete");
	scanf("%d",&pos);
	for(i=1;i<pos-1;pos++)
	{
		if(q->next==NULL)
		{
			printf("Less element ");
			return 0;
		}
		q=q->next;
	}
	t=q->next;
	q->next=t->next;
	free(t);
	printf("Element deleted!");
	return 0;
}
	

