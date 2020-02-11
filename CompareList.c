int compare(node *list1, node *list2)
{
    // Recursive
    if(list1==NULL && list2==NULL)
            return 0;
    else if(list1!=NULL && list2==NULL || list1->data > list2->data)
            return 1;
    else if(list1==NULL && list2!=NULL || list1->data < list2->data)
            return -1;

    else return compare(list1->next , list2->next);

   /* Iterative

   while(list1 != NULL && list2 != NULL){
         if(list1->c > list2->c)
            return 1;
        else if(list1->c < list2->c)
            return -1;
        list1 = list1->next;
        list2 = list2->next;
     }

     if(list1==NULL && list2==NULL) return 0;
     else if(list1!=NULL && list2==NULL) return 1;
     else if(list1==NULL && list2!=NULL) return -1;*/


}
