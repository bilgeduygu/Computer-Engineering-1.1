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
		n->next=NULL;
		n->data=data;
		return n;
	}
	else if(n->data>data)
	{
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->next=n;
		n=temp;
		return temp;
	}	
	struct node*iter=n;
	
	while(iter->next!=NULL && iter->next->data <data)
	{
		iter=iter->next;
	}

	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	iter->next=temp;
	temp->data=data;
	return n;		
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
		printf("%d\n",n->data);
		n=n->next;
	}
}
int main()
{
	struct node*root;
	root=NULL;
	
	root=insert(root,50);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,80);
	root=insert(root,10);
	root=insert(root,60);
	/*	
	print(root);
	
	root=del(root,60);
	root=del(root,20);
	root=del(root,10);
	root=del(root,500);
	*/
	print(root);
}
