
#ifndef LIST_H
#define LIST_H

struct Node
{
	int data;
	struct Node* next;
};

#endif


extern int traverse(struct Node* n);

// insert a new node in the front
extern int push(struct Node** head, int new_data);

// insert a new node after a given node
extern int insertAfter(struct Node* n, int new_data);