// A simple C program for traversal of a linked list 
#include<stdio.h> 
#include<stdlib.h> 
  
struct Node  
{ 
  int data; 
  struct Node *next; 
}; 
  
// This function prints contents of linked list starting from  
// the given node 
void printList(struct Node *n) 
{ 
  while (n != NULL) 
  { 
     printf(" %d ", n->data); 
     n = n->next; 
  } 
} 
  
void push(struct Node** head_ref, int new_key) 
{ 
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the key  */
    new_node->data  = new_key; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
}   

void deleteGivenElement(struct Node** head, int value)
{
	
    struct Node* currNode = (struct Node*) malloc(sizeof(struct Node));    
	struct Node* prevNode = (struct Node*) malloc(sizeof(struct Node));
	prevNode = NULL;
	currNode = *head;
	while(currNode!=NULL)
	{
		if(currNode->data == value)
		{
			if(prevNode == NULL)
			{
				*head = currNode->next;
			}
			else
			{
				prevNode->next = currNode->next;
			}
			
			free(currNode);
			return;
		}
		prevNode;
		currNode;
		currNode = currNode->next;		
	}
	
}

int main() 
{ 
  struct Node* head = NULL; 
   
    
  // allocate 3 nodes in the heap   
    push(&head, 10); 
    push(&head, 30); 
    push(&head, 11); 
    push(&head, 21); 
    push(&head, 14); 
    deleteGivenElement(&head,30);
  printList(head); 
   
  return 0; 
}
