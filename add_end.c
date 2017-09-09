#include"linked.h"
void add_end(ST **ptr)
{
 static ST *temp,*last;
 temp=(ST *)malloc(sizeof(ST));
 printf("Enter the data  : \n");
 scanf(" %s",temp->data);
 if(!*ptr)
 { 
   temp->next=*ptr;
   *ptr=temp;
 }
 else
 {
  temp->next=last->next;
  last->next=temp;
 }
 last=temp;
}

