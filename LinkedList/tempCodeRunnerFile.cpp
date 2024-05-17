
    if(tail ==NULL)
    {
        return;
    }
    node *prev = tail;
    node *curr =prev->next;
    while(curr->data != element)
    {
        prev =curr;