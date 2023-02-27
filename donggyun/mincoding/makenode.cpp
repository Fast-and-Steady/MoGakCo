#include <iostream>

using namespace std;

struct list
{
	int n;
	list *next;
};

void	addlist(list **node, int data)
{
	list *temp;

	if (*node == NULL)
	{
		*node = new list;
		(*node)->n = data;
		(*node)->next = NULL;
	}
	else
	{
		temp = *node;
		while (temp->next)
			temp = temp->next;
		temp->next = new list;
		temp->next->n = data;
		temp->next->next = NULL;
	}
}

int main()
{
	list *node;

	node = NULL;
	int n;

	cin >> n;
	for (int x = 0; x < 4; x++)
	{
		addlist(&node, n * (x + 1));
	}
	for (auto i = node; i != NULL; i = i->next)
	{
		cout << i->n << " ";
	}
	return (0);
}