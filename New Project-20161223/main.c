
# include <stdio.h>
# include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

int traverse(struct Node* n)
{
	while(n!=NULL)
	{
		printf("%d ", n->data);
		n = n->next;
	}
	return 0;
}

// insert a new node in the front
int push(struct Node** head, int new_data)
{
    // create a new node
	struct Node * new_node = NULL;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	
	// attach the head to the new node
	new_node->next = *head;
	
	// let the new node be the head
	*head = new_node;
    
    return 0;
}


int main(void)
{
	struct Node* head = NULL;
	struct Node* n1 = NULL;
	struct Node* n2 = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	n1 = (struct Node*)malloc(sizeof(struct Node));
	n2 = (struct Node*)malloc(sizeof(struct Node));

	head->data = 0;
	head->next = n1;

	n1->data = 1;
	n1->next = n2;

	n2->data = 2;
	n2->next = NULL;
	


	traverse(head);
	printf("\n");
	
	push(&head, -1);
	traverse(head);
	printf("\n");

}

