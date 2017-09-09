#include"linked.h"
void reverse_links(ST **ptr)
{
 ST *backup_pointer=0,*org_pointer=0;
 while(*ptr)
 {
  backup_pointer=org_pointer;
  org_pointer=*ptr;
  (*ptr)=(*ptr)->next;
  org_pointer->next=backup_pointer;
 }
 *ptr=org_pointer;
} 
