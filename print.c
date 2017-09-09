#include "linked.h"
void print(ST *ptr)
{
	while(ptr)
	{
		printf("  %s \n",ptr->data);
		ptr=ptr->next;
	}
}
