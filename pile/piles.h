#pragma once
#include"node.h"
class Pile
{
private:
	Node* sommet;
public:
	Pile();
	void Empiler(int dt);
	void Depiler();
	bool PileVider()const;
	void AfficherPile();
	int sommetes()const;
	//~Pile();
};

