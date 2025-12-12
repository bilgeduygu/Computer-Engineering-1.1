#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node*insert(struct node*n,int data)
{
	
	if(n==NULL)
	{
		n=(struct node*)malloc(sizeof(struct node));
		n->data=data;
		n->next=NULL;
		return n;
	}
	
	else if(n->data > data)
	{
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->next=n;
		temp->data=data;
		n=temp;
		return temp;
	}
	
	struct node*iter=n;
	while(iter->next!=NULL && iter->next->data < data)
	{
		iter=iter->next;
	}
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	iter->next=temp;
	temp->data=data;
	return n;

}
int printq(struct node*n)
{
	while(n!=NULL)
	{
		printf("%d,",n->data);
		n=n->next;
	}
}
struct node*del(struct node*n,int data)
{

	struct node*temp;
	struct node*iter=n;
	if(n->data==data)
	{
		temp=n;
		n=n->next;
		free(temp);
		return n;
	}
	while(iter->next!=NULL && iter->next->data!=data)
	{
		iter=iter->next;
	} 
	
	if(iter->next==NULL)
	{
		printf("number not found");
		return n;
	}
	temp=iter->next;
	iter->next=temp->next;
	free(temp);
	return n;
	
	
	
}
int main()
{
	struct node*root;
	root=NULL;
	root=insert(root,10);
	root=insert(root,300);
	root=insert(root, 50);
	root=insert(root,70);
	root=insert(root,310);
	root=insert(root,60);
	printq(root);
	printf("\n");
	root=del(root,70);

	root=del(root,10);

	root=del(root,310);

	root=del(root,60);
	printq(root);
}
