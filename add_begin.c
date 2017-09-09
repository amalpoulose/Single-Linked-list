#include "linked.h"
void add_begin(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("\nEnter the data  : ");
	scanf(" %s",temp->data);
	temp->next=*ptr;
	*ptr=temp;
}
