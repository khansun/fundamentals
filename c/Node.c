void insert_before(node *newnode, int num)
{
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        node *temp = start;
        node *n = locate(temp, num);
        if(n!= NULL)
        {
            while(temp -> next -> num!= num && temp ->next!= NULL)
            {
                temp = temp ->next;

            }
            newnode -> next = temp -> next;
            temp -> next = newnode;
        }
        else
        {
            newnode -> next = start;
            start = newnode;
        }
    }
}
// Function to move last node to the front in a given Linked List
void rotate(node** start)
{
	// Proceed only when list is valid
	if (!*start || !(*start)->next)
		return;

	node* ref = *start;

	// Move to second last node
	while (ref->next->next)
		ref = ref->next;

	// Convert the list to circular list
	ref->next->next = *start;

	// Fix the head pointer
	*start = ref->next;

	// break the chain
	ref->next= NULL;
}
