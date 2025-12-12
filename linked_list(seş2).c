#include <stdio.h>
#include <stdlib.h>

struct node{
	int x;
	struct node*next;
};
int print_list(struct node*r)
{
	while(r!=NULL)
	{
		printf("%d\n",r->x);
		r=r->next;
	}
}
int add(struct node*r,int x)
{
	while(r->next!=NULL)
	{
		r=r->next;
	}
	r->next=(struct node*)malloc(sizeof(struct node));
	r->next->x=x;
	r->next->next=NULL;	
}
struct node* seq(struct node*r,int x)
{
	if(r==NULL)
	{
		r=(struct node*)malloc(sizeof(struct node));
		r->next = NULL;
		r->x=x;
	}
	struct node*iter=r;
	while(iter->next !=NULL && r->next->x<x)
	{
		iter=iter->next;
	}
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=x;
	if(r->next == NULL)
	{
		if(r-> x > x)
		{
			struct node*temp=(struct node*)malloc(sizeof(struct node));
			temp->x=x;
			temp->next=root;
			return temp;
		}
		else
		{
			struct node*temp=(struct node*)malloc(sizeof(struct node));
			temp->x=x;
			temp->next=NULL;
			root->next=temp;
			return r;
		}
	}
}
int main()
{
	struct node*root;
	root=NULL;
	seq(root,400);
	seq(root,40);
	seq(root,4);
	seq(root,450);
	seq(root,50);
	root=(struct node*)malloc(sizeof(struct node));
	root->next=NULL;
	root->x=500;


	int i;
	for(i=0;i<5;i++)
	{
		add(root,i*10);
		
	}
	print_list(root);
	
	struct node*iter;
	iter=root;
	
	for(i=0;i<3;i++)
	{
		iter=iter->next;
	}
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=100;
	print_list(root);
}
