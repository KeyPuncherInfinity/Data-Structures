/*Created on TurboC++       Please try this on Turbo++ only, or do some edits and try it on your compiler.
                -----------------------------------------------DESCRIPTION-----------------------------------------------
                Operations on Singly Linked Lists. This progarm is used to create or perform operations on SLL,
                This is a Menu Driven Program.
                Functions used:
                1. Create a List.
                2. Append the created list.
                3. Delete last node form created list.
                4. Display created list
Place of Development: Abeda Inamdar Senior College.
*/
#include<stdio.h>//Main Header file
#include<conio.h>//For Clearing the output screen and for getch(); function.
#include<stdlib.h>//I used this Library file for exit(0) and DMA Functions.
struct node
{
	int data;
	struct node *next;
}*newnode,*root=NULL;//I've created newnode and root globally so there is no need to return pointer to any functions. 
void Create();//For creating SLL.
void Append();//Adds a node at the last.
void Delete();//Deletes the node at last position.
void Display();//Displays the list created.
void main()
{
	int ch;//For Switching
	while(1)
 {
	clrscr();//Required in TurboC++
	printf("------------------------Select Your Option------------------------\n");
	printf("1. Create list.");
	printf("\n2. Append list.");
	printf("\n3. Delete node.");
	printf("\n4. Display list.");
	printf("\n5. Exit.");
	printf("\n\tEnter Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: Create();
			break;
		case 2: Append();
			break;
		case 3: Delete();
			break;
		case 4: Display();
			break;
		case 5: exit(0);
			break;
		default: printf("\nInvalid Input.");
	}
	getch();//This one too(required).
 }
}

void Create()
{
	struct node *temp;
	int i,n;
	printf("Enter the size of your list: ");
	scanf("%d",&n);
	printf("\nEnter upto %d values: ",n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(root==NULL)
		{
			root=newnode;
		}
		else
		{
			temp=root;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
	printf("\nList Created press ENTER and select 4th option to display.");
}

void Display()
{
	struct node *temp;
	if(root==NULL)
	{
		printf("\nNo List Was Created.");
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->next;
		}
	}
}

void Append()
{
	struct node *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter a value for your newnode: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp=root;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	printf("\nNode Added, press ENTER and select 4th option to display.");
}

void Delete()
{
	struct node *temp, *ptr;
	if(root==NULL)
	{
		printf("\nNo String Created.");
	}
	else if(root->next==NULL)
	{
	    ptr=root;
	    root=NULL;
	    printf("\nDeleted node is: %d",ptr->data);
	    free(ptr);
	}
	else
	{       ptr=root;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		printf("\nDeleted node is: %d",ptr->data);
		free(ptr);
	}
}
