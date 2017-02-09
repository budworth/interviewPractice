#include <iostream>

using namespace std;

struct node
{
	int data;
	node *left;
	node *right;

};

int findHeight(struct node *n)
{

	if (n == 0)
	{
		return 0;
	}

	else
	{
		if (findHeight(n->left) < findHeight(n->right))
			return findHeight(n->right) + 1;
		else
			return findHeight(n->left) + 1;
	}

}


int main()
{

	struct node head;

	head.left = 0;
	head.right = new struct node;

	head.right->left = 0;
	head.right->right = 0;

	int numNode = findHeight(&head);

	cout << numNode << endl;

}