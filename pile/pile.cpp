#include <iostream>
#include "piles.h"
#include "Node.h"
using namespace std;

int main()
{
	int T = 0;
	while(T == 0){

		Pile a;

		int taille;
		cout << "DONNEZ LA TAILLE DE LA PILE " << endl;
		cin >> taille;

		cout << "EMPILER LA PILE" << endl;
		cout << endl;

		for (int i = 0; i < taille; i++)
		{
			int val;
			cout << "DONNEZ LA VALEUR :" << i + 1 << endl;
			cin >> val;
			a.Empiler(val);
		}

		cout << endl;

		char G;

		cout << "Si vous voulez afficher la pile entrez 'A' " << endl;
		cout << "Si vous voulez afficher la valeur de sommet entrez 'B' " << endl;
		cout << "Si vous voulez connaitre que la pile est vide ou pas entrez 'C' " << endl;
		cout << "Si vous voulez Depiler la pile entrez 'D' " << endl;
		
		cin >> G;

		if (G == 'A') {
			for (int i = 0; i < taille; i++)
			{
				a.AfficherPile();
			}
			cout << "NULL";
		}

		else if (G == 'B') {
			cout << "la valeur de sommet est :" << a.sommetes() << endl;
		}

		else if (G == 'C') {
			if (!a.PileVider()) {
				cout << "la pile est pas vide " << endl;
			}
			else {
				cout << "la pile est vide " << endl;
			}
		}

		else if (G == 'D') {
			for (int i = 0; i < taille; i++)
			{
				a.Depiler();
			}
			cout << "la pile a ete Supprimer" << endl;
		}

		cout << endl;
		cout << endl;
		char R;

		cout << "Si vous voulez continur entrez 'E' " << endl;
		cout << "Si vous voulez arreter entrez 'F' " << endl;
		cin >> R;
		if (R == 'F') {
			T++;
		}
		else if(R == 'E'){
			system("cls");
		}

	}
}