#include"linked.h"
void read_from_file(ST **ptr)
{
 char s[20];
 ST *temp; 
 FILE *fp;
 fp=fopen("linked_data","r");
 while(fscanf(fp,"%s\n",s)!=-1)
 {
  temp=(ST *)malloc(sizeof(ST)); 
  strcpy(temp->data,s);
  temp->next=*ptr;
  *ptr=temp;
 }
 printf("\n\tDone\n");
}
   
