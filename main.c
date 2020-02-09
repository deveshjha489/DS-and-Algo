#include<stdio.h>
int main()
{
    struct listNode *head = NULL;
     struct listNode *it = NULL, *temp = NULL;
    for(int i=10;i>0;--i){
        temp = createNode(i);
        if(head == NULL)
            {
                head = temp;
            }
            else{
            it = head;
            while(it->next != NULL){
                 it = it->next;
            }
            it->next = temp;

            }

    }
    printList(head);

}
