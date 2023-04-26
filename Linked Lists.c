#include <stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}; //struct node to hold data and a pointer.
struct node *start; // starting pointer

void display()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("data= %d , self addr= %d , addr= %d \n",temp->data,temp,temp->next);
		temp=temp->next; // address of next stored in temp
	}
}
int main()
{
	struct node*newnode1=(struct node*)malloc(sizeof(struct node));
	struct node*newnode2=(struct node*)malloc(sizeof(struct node));
	struct node*newnode3=(struct node*)malloc(sizeof(struct node)); 
	start=newnode1;
	
	newnode1->data=2;  // newnode1 accessing the data variable of struct node.
	newnode1->next=newnode2; // Address of next node stored in variable next of struct node.
	newnode2->data=3;
	newnode2->next=newnode3;
	newnode3->data=4;
	newnode3->next=NULL;
	display(); // display�the�values
	
}
