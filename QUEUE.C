/* CREATED ON TURBO C++
	NAME: ZAHID IBRAHIM SHAIKH
	DATE: 2019-07-24 / WEDNESDAY
	TIME: 07:29 PM

	-------------------------DESCRIPTION-------------------------
	Program is to create a Queue using Data Structures in C lang-
	-uage.
	Functions used in this program:
		1> Create Queue :
		 Creates a Static Queue.

		2> Display Queue :
		 Displays the Queue once the Queue is created.

		3> Remove from Queue :
		 Removes the first element form the queue.

		4> Add in Queue :
		 Adds the element at the rare position of the queue.

		5> Exit :
		 Exits the loop.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 50
int queue[size], front=0, rare=0;
int remove();
void insert(int);
void add()
{
	if(front==rare)
	{
		printf("\nNo Queue is created.");
	}
	else
	{
	int ele;
		printf("\nEnter the value to add to queue: ");
		scanf("%d",&ele);
		insert(ele);
		printf("\nElement added successfully.");
	}
}
void input()
{
		int i,n,ele;
		printf("\nEnter the size for queue: ");
		scanf("%d",&n);
		printf("\nEnter upto %d values: ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			insert(ele);
		}
		printf("\nQueue created, press ENTER and select 2 to display.");

}
void insert(int ele)
{
	if(rare==size)
	{
		printf("\nQueue is Full.");
	}
	else
	{
		queue[rare]=ele;
		rare++;
	}
}
void display()
{
	int i=0;
	if(front==rare)
	{
		printf("\nQueue is empty.");
	}
	else
	{
		printf("|");
		while(i!=rare)
		{
			printf(" %d |",queue[i]);
			i++;
		}
	}
}

int remove()
{
	int i=0;
	if(front==rare)
	{
		printf("\nQueue is empty.");
	}
	else
	{
		while(i!=rare)
		{
			queue[i]=queue[i+1];
			i++;
		}
		rare--;
		printf("\nElement removed.");
	}
	return 0;
}

void main()
{
	int ch;
	clrscr();
	while(1)
 {
	clrscr();
	printf("--------Select Operation for queue--------\n\n");
	printf("1. Create Queue.");
	printf("\n\n2. Display Queue.");
	printf("\n\n3. Remove from Queue.");
	printf("\n\n4. Add value in Queue.");
	printf("\n\n5. Exit.");
	printf("\n\nEnter Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: input();
			break;
		case 2: display();
			break;
		case 3: remove(0);
			break;
		case 4: add();
			break;
		case 5: exit(0);
		default: printf("\nInvalid Input.");
	}
	getch();
 }
}
