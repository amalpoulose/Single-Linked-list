#include"linked.h"
int count_nodes(ST *ptr)
{
 int count=0;
 while(ptr)
 {
   count++;
   ptr=ptr->next;
 }
 return count;
} 
