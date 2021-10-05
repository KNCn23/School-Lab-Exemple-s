#include <stdio.h>
#include <stdlib.h>




struct listNode {
int year;
float balance;
struct listNode *nextPtr;
};




void insert(struct listNode **sPtr, int y, float b);
void delete(struct listNode **sPtr, float value);
int isEmpty(struct listNode *sPtr);
void printList(struct listNode *currentPtr);
float computeMin(struct listNode *currentPtr);




int main(void)
{
struct listNode * startPtr = NULL;
int y;
float b, minbalance;



printf("Enter a year and balance: ");
scanf("%d%f", &y, &b);



while (y > 0) {
insert(&startPtr, y, b);
printList(startPtr);
printf("Enter a year and balance: ");
scanf("%d%f", &y, &b);
}

minbalance=computeMin(startPtr);
delete(&startPtr, minbalance);
printList(startPtr);

return 0;



}




void insert(struct listNode **sPtr, int y, float b)
{
struct listNode * newPtr = malloc(sizeof(struct listNode)); // create node



if (newPtr != NULL) { // is space available
newPtr->year = y;
newPtr->balance = b;
newPtr->nextPtr = NULL; // node does not link to another node



struct listNode * previousPtr = NULL;
struct listNode * currentPtr = *sPtr;

while (currentPtr != NULL) {
if(currentPtr->year==y)
{
currentPtr->balance=b;
return;
}
currentPtr = currentPtr->nextPtr; // ... next node
}
currentPtr = *sPtr;
// loop to find the correct location in the list
while (currentPtr != NULL && y > currentPtr->year) {
previousPtr = currentPtr; // walk to ...
currentPtr = currentPtr->nextPtr; // ... next node
}



// insert new node at beginning of list
if (previousPtr == NULL) {
newPtr->nextPtr = *sPtr;
*sPtr = newPtr;
}
else { // insert new node between previousPtr and currentPtr
previousPtr->nextPtr = newPtr;
newPtr->nextPtr = currentPtr;
}
}
else {
printf("%d not inserted. No memory available.\n", y);
}
}



// delete a list element
void delete(struct listNode **sPtr, float value)
{
// delete first node if a match is found
if (value == (*sPtr)->balance) {
struct listNode * tempPtr = *sPtr; // hold onto node being removed
*sPtr = (*sPtr)->nextPtr; // de-thread the node
free(tempPtr); // free the de-threaded node



}
else {
struct listNode * previousPtr = *sPtr;
struct listNode * currentPtr = (*sPtr)->nextPtr;



// loop to find the correct location in the list
while (currentPtr != NULL && currentPtr->balance != value) {
previousPtr = currentPtr; // walk to ...
currentPtr = currentPtr->nextPtr; // ... next node
}



// delete node at currentPtr
if (currentPtr != NULL) {
struct listNode * tempPtr = currentPtr;
previousPtr->nextPtr = currentPtr->nextPtr;
free(tempPtr);

}
}



}



// return 1 if the list is empty, 0 otherwise
int isEmpty(struct listNode * sPtr)
{
return sPtr == NULL;
}



// print the list
void printList(struct listNode * currentPtr)
{
// if list is empty
if (isEmpty(currentPtr)) {
puts("List is empty.\n");
}
else {
printf("LIST = ");



// while not the end of the list
while (currentPtr != NULL) {
printf("[%d %.1f] -> ", currentPtr->year, currentPtr->balance);
currentPtr = currentPtr->nextPtr;
}



puts("NULL\n");
}
}




float computeMin(struct listNode * currentPtr)
{
int yr;
float min=100000.0;

if (isEmpty(currentPtr)) {
puts("List is empty.\n");
}
else {



// while not the end of the list
while (currentPtr != NULL) {
if(currentPtr->balance<min)
{
min=currentPtr->balance;
yr=currentPtr->year;
}
currentPtr = currentPtr->nextPtr;
}
}

printf("After removing [%d %.1f]\n",yr,min);
return min;
}
