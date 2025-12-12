#include <stdio.h>
#include <stdlib.h>

struct n{
	int data;
	n*right;
	n*left;
};
typedef n node;

node*insert(node*tree, int x)
{
	if(tree==NULL)
	{
		node*root=(node*)malloc(sizeof(node));
		node->right=NULL;
		node->left=NULL;
		root->data=x;
		return root;
	}
	if(tree->data<x)
	{
		tree->right=insert(tree->right,x);
		return insert(tree->right,x);
	}
	tree->left=insert(tree->left,x);
	return insert(tree->left,x);
}
void print_h(node*tree , int l){
    int i;
    if(node != NULL){
        print_h(node->right, l+1);
    for(i=1;i<=l;i++){
        printf("    ");
    }
        printf("%d",node->key);
        printf("\n");
        print_h(node->left, l+1);
    }
}
int main()
{
	node*tree=NULL;
	tree=insert(tree,12);
	tree=insert(tree,500);
	tree=insert(tree,68);
	tree=insert(tree,71);

	print_h(tree->root,0);
}

