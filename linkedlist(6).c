#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node*push(struct node*n,int data)
{

	struct node*iter=n;
	while(iter->next!=NULL )
	{
		iter=iter->next;
	}
	
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	iter->next=temp;
	temp->data=data;
	return n;
}
struct node*pop(struct node*n,int data)
{
	struct node*temp;
	struct node*iter=n;
	
	while(iter->next!=NULL && iter->next->data!=data)
	{
		iter=iter->next;
	}
	
	if(iter->next==NULL)
	{
		printf("wrong number");
		return n;
	}
	temp=iter->next;
	iter->next=temp->next;
	free(temp);
	return n;
}
int print(struct node*n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	},	printf("\n");
}
int main()
{
	struct node*root;
	root=NULL;
	
	root=push(root,10);
	root=push(root,20);
	root=push(root,30);
	root=push(root,40);
	root=push(root,50);
	root=push(root,60);
		
	print(root);
	
	root=pop(root,60);
	root=pop(root,20);
	root=pop(root,10);
	root=pop(root,500);
	
	print(root);
}
