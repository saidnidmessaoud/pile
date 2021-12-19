#include "Node.h"

Node::Node(int d)
{
	this->data = d;
	this->next = nullptr;
}

Node::Node()
{
	this->data = 0;
	this->next = nullptr;
}

void Node::lier_sommet_next(Node* C)
{
	this->next = C;
}

Node* Node::suivant() const
{
	return this->next;
}

int Node::donne()const
{
	return this->data;
}
