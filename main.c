#include "linked.h"
int main(void)
{
	ST *hptr=0;
	char ch,option;
	int n;
	do
	{
          system("clear");
          printf("\t\t\tLINkED LIST\n\n1. Add Node at Begin\n2. Delete Node from Back\n3. Display Nodes\n4. Read from file\n5. Copy to file\n6. Reverse Links\n7. Revese Data\n8. Number of Nodes\n\nEnter Option  :");
          scanf(" %c",&option);
	  switch(option)
          {
           case '1':add_begin(&hptr);
		    break;
	   case '2':printf("\nenter node which want to delete\n");
		    scanf(" %d",&n);
		    delete_last(&hptr,n);
                    break;
	   case '3':print(hptr);
                    break;
	   case '4':read_from_file(&hptr);
                    break;
	   case '5':copy_to_file(hptr);
                    break;
           case '6':reverse_links(&hptr);
                    break;
           case '7':reverse_data(hptr);
                    break;
           case '8':printf(" Number of nodes = %d \n",count_nodes(hptr));
                    break;
           default:printf("Invalid Option\n");
          }         
	printf("Do you want to continue?(Y/N)  : ");
	scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y'); 

	return(0); 
}

