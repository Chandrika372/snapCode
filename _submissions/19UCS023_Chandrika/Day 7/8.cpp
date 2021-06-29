ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head1=A;
    ListNode* head2=B;
    if(head1==NULL)
    return head2;
    if(head2==NULL)
    return head1;
    ListNode* temp=new ListNode(0);
    ListNode* p=temp;
    while(head1 && head2)
    {
        if(head1->val<=head2->val)
        {
            temp->next=head1;
            head1=head1->next;
        }
        else
        {
            temp->next=head2;
            head2=head2->next;
        }
        temp=temp->next;
    }
    if(head2)
    temp->next=head2;
    if(head1)
    temp->next=head1;
    return p->next;

}
