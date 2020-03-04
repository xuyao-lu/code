struct ListNode *readlist()
{
    struct ListNode *head,*tail,*p;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next=NULL;
    p=head;
    while(1)
    {
    tail=(struct ListNode*)malloc(sizeof(struct ListNode));
    scanf("%d",&tail->data);
    if(tail->data==-1)
        break;
    p->next=tail;
    p=tail;
    }
    p->next=NULL;
    return head;
}





struct ListNode *readlist
