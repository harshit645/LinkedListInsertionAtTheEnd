#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ptr;
};
typedef struct node NODE;
void main()
{
NODE *temp,*head,*last=0;
int choice=1;
clrscr();
printf("Insertion at the end of linked list\n");
while(choice==1)
{
temp=(NODE *)malloc(sizeof(NODE));
printf("enter the data\n");
scanf("%d",&temp->data);
if(last==0)
{
head=last=temp;
}
else
{
last->ptr=temp;
last=temp;
}
printf("enter the choice as you want\n");
scanf("%d",&choice);
}
last->ptr=0;
printf("the values of linked list are\n");
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->ptr;
}
getch();
}