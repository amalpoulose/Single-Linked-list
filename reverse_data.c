#include"linked.h"
void reverse_data(ST *ptr)
{
 ST temp,*p,*q;
 int i,j,l;
 p=ptr;
 l=count_nodes(ptr);
 for(j=0;j<l/2;j++)
 {
  q=ptr;
  for(i=0;i<l-1-j;i++)
     q=q->next;

  temp=*q;
  *q=*p;
  *p=temp;
  
  temp.next=q->next;
  q->next=p->next;
  p->next=temp.next;

  p=p->next;
}
}
