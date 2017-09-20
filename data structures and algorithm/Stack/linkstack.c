#include <stdio.h>
#include<stdlib.h>
struct node {
	int a;
	struct node *next;
}*start;
void push();
void pop();
void display();
int peek();
int main()
{
	start = NULL;
	int choice;
	printf("enter 1 for push \n 2 for pop \n 3 for display \n 4 for peek \n 5 for exit ");
	scanf("%d", &choice);
	while (choice != 5)
	{
		if (choice == 1)
			push();
		else if (choice == 2)
		{
			pop();
		}
		else if (choice == 3)
		{
			display();
		}
		else if (choice == 4)
		{
			printf("%d",peek());
		}
		printf("reenter your choice ");
		scanf("%d", &choice);
	}
}
void push()
{
	if (start == NULL)
	{
		start = (struct node*)malloc(sizeof(struct node));
		start->next = NULL;
		scanf("%d",&start->a);
	}
	else
	{
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->next = start;
		scanf("%d", &temp->a);
		start = temp;
	}
}
void pop() {
	if (start == NULL)
	{
		printf("Underflow");
	}
	else
	{
		struct node *temp;
		temp = start;
		printf("%d\n", temp->a);
		start = start->next;
		free(temp);
	}
}
void display()
{
	struct node *temp = start;
	while (temp != NULL)
	{
		printf("%d\n", temp->a);
		temp=temp->next;
	}
}
int peek()
{
	return(start->a);
}