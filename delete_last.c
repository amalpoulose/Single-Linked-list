 #include "linked.h"
void delete_last(ST **ptr,int n)
{
        int i;
        ST *false_pointer,*true_pointer,*temp;
        false_pointer=true_pointer=temp=*ptr;
        if(!*ptr)                                        //check whether the linked list present or not
         { 
                printf("Linked list not present\n");
                return;
        }   
        if(!n)                                            //Check whether user given 0 as input if yes give warning and return
        {
                printf("Node number (>0) is accepted\n");
                return;
        }
        for(i=0;i<n;i++){                                 //Loop which moves the false_pointer pointer to n postion 
                false_pointer=false_pointer->next;
                if(false_pointer==0 && i!=n-1){           //if false_pointer pointer is 0 and still i not reached n-1 means user given invalid input
                        printf("Invalid node number\n");
                        return;
                }
        }
        if(false_pointer==0 /*&& i==n*/){             //check whether the user given 1st node to be deleted if yes simply update head pointer value
                (*ptr)=(*ptr)->next;
                return;}

        while(false_pointer)                                      //Loop to find node to be deleted
        {
                temp=true_pointer;                               //save true_pointer to temporary pointer temp
                true_pointer=true_pointer->next;                 //increment true_pointer value to next node
                false_pointer=false_pointer->next;               //increment false_pointer value to next node
                // if(!q)
        }
        temp->next=true_pointer->next;                          //After finding node to be deleted,delete the node

}
