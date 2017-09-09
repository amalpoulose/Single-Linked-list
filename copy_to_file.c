#include"linked.h"
void copy_to_file(ST *ptr)
 {
  FILE *fp;
  fp=fopen("linked_data","a+");
  while(ptr)
  {
    fprintf(fp,"%s\n",ptr->data);
    ptr=ptr->next;
  }
 fclose(fp);
 }
