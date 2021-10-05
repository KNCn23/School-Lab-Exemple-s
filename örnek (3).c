#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *nextPtr;
};


typedef Node *NodePtr;

void enqueue(QueueNodePtr *headPtr, NodePtr *tailPtr, int value);
int countEvenNumbers(struct node *head,int);
int isEmpty(QueueNodePtr headPtr);

int main(void)
{
NodePtr headPtr = NULL;
NodePtr tailPtr = NULL;
int item;
int count1=0;

while(1)
{
	printf("%s", "Enter an integer: ");
	scanf("\n%d", &item);
	count1++;
	if(item == -1)
		break;
	enqueue(&headPtr, &tailPtr, item);
}
printf("\nNumber of Even Number's :%d",countEvenNumbers(Node *headPtr,int count1));
}

int isEmpty(NodePtr headPtr)
{
return headPtr == NULL;
}

void enqueue(NodePtr *headPtr,NodePtr *tailPtr, int value)
{
NodePtr newPtr = malloc(sizeof(Node));

if (newPtr != NULL) { 
newPtr->data = value;
newPtr->nextPtr = NULL;

if (isEmpty(*headPtr)) {
*headPtr = newPtr;
}
else {
(*tailPtr)->nextPtr = newPtr;
}

*tailPtr = newPtr;
}
else {
printf("%d not inserted. No memory available.\n", value);
}
}
int countEvenNumbers(struct NodePtr *headPtr,int count1)
{
	int count=0;
	NodePtr newPtr = malloc(sizeof(Node));
	for(i=0;i<count1;i++)
	{
		if(newPtr % 2 == 0)
		{
			count++;
			newPtr->nextPtr = NULL;
		}
	}
	return count;
}
