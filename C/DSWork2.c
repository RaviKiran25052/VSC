void fun(struct node **head_ref) {
	struct node *temp = NULL;
	struct node *current = *head_ref;
	while (current != NULL) {
		temp current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if(temp!= NULL)
	*head_ref= temp->prev;
}

Node temp = new Node(6,head,head.getNext());
Node templ = new Node(0,tail.getPrev(),tail);
head.setNext(temp);
temp.getNext().setPrev(temp);
tail.setPrev(templ);
templ.getPrev().setNext(templ);
