#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	struct node*prev;
};

struct node*insert(struct node*n,int data)
{
	if(n==NULL)
	{
		n=(struct node*)malloc(sizeof(struct node));
		n->next=NULL;
		n->prev=NULL;
		n->data=data;
		return n;
	}
	else if(n->data > data)
	{
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->next=n;
		n->prev=temp;
		temp->prev=NULL;
		return temp;
	}
	
	struct node*iter=n;
	
	while(iter->next!=NULL && iter->next->data < data)
	{
		iter=iter->next;
	}
	
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	temp->data=data;
	iter->next=temp;
	temp->prev=iter;
	
	if(temp->next!=NULL)
	{
		temp->next->prev=temp;
	}
	return n;	
}
struct node*del(struct node*n,int data)
{
	struct node*temp;
	struct node*iter=n;
	
	if(n->data==data)	
	{
		temp = n;
		n = n->next;
		free(temp);
		return n;
	}
		
	while(iter->next!=NULL && iter->next->data!=data)
	{
		iter=iter->next;
	}
	if(iter->next==NULL)
	{
		printf("not found");
		return n;
	}
	
	temp=iter->next;
	iter->next=temp->next;
	free(temp);
	
	if(iter->next!=NULL)
	{
		temp->next->prev=iter;
	}
	return n;
		
}
int print(struct node*n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
int main()
{
	struct node*root;
	root=NULL;
	
	root=insert(root,10);
	root=insert(root,30);
	root=insert(root,20);
	root=insert(root,0);
	
	print(root);
	printf("\n");
	root=del(root,30);
	root=del(root,10);
	root=del(root,0);
	print(root);
	return 0;
}
