#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
struct Stack
{
	int top;
	unsigned capacity;
	char* array;
};
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (char*) malloc(stack->capacity * sizeof(char));
	return stack;
}
int isFull(struct Stack* stack)
{ return stack->top == stack->capacity - 1; }

int isEmpty(struct Stack* stack)
{ return stack->top == -1; }
void push(struct Stack* stack, char item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
}

char pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}
void reverse(char str[])
{
	int n = strlen(str);
	struct Stack* stack = createStack(n);

	int i;
	for (i = 0; i < n; i++)
		push(stack, str[i]);
	for (i = 0; i < n; i++)
		str[i] = pop(stack);
}
int main()
{
	char str[] = "",str1[] ="";
	printf("enter string:");
	scanf("%s",&str[]);
	reverse(str);
	printf("Enter second string:");
	scanf("%s",&str1[]);
	for(i=0;i<25;i++)
	{
		switch str1[i]
		{
			case'O':
				printf("\n %s",str);
				break;
			case'X':
				str[i]=='x';
				break;	
		}
	}
	return 0;
}
