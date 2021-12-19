#pragma once
class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d);
	Node();
	void lier_sommet_next(Node* C);
	Node* suivant()const;
	int donne()const;
};

