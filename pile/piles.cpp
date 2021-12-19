#include "piles.h"
#include <assert.h>
#include <iostream>
using namespace std;
Pile::Pile()
{
	this->sommet = nullptr;
}

void Pile::Empiler(int dt)
{
	Node* N = new Node(dt);
	N->lier_sommet_next(this->sommet);
	this->sommet = N;
}

void Pile::Depiler()
{
	assert(!PileVider());
	Node* p = this->sommet;
	Node* c = this->sommet->suivant();
	this->sommet = c;
	delete p;
}

bool Pile::PileVider() const
{
	if (this->sommet != nullptr) {
		return false;
	}
	else {
		return true;
	}

}

void Pile::AfficherPile()
{
	assert(!PileVider());
	cout <<" | " <<this->sommetes()<<" |--> " ;
	this->Depiler();
}

int Pile::sommetes()const
{
	return this->sommet->donne();
}

/*Pile::~Pile()
{

}*/
