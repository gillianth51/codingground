# include <stdio.h>
# include <stdlib.h>
# include "list.h"

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