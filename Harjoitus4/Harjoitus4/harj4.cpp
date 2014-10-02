#include <iostream> // input-output-kirjaston sis‰llytys
using namespace std; // standardi-nimiavaruus
// m‰‰ritell‰‰n vakioita
#define MINIMI 10 // vanhalla tavalla
const int MAKSIMI = 20; // uudella tavalla
// julkisten muuttujien m‰‰rittely
int summa;

// aliohjelmien esittely
void Laske(int, int);

// p‰‰ohjelma
void main()
{	// m‰‰ritell‰‰n paikallisia muuttujia
	int luku1 = 2;
	int luku2;
	cout << "syˆt‰ luku: ";
	cin >> luku2;
	Laske(luku1, luku2); // kutsutaan aliohjelma
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI;
	else
		if (summa > MAKSIMI)
			cout << "Summa on suurempi kuin " << MAKSIMI;
		else
			cout << "Summa on " << MINIMI << " :n ja "<< MAKSIMI <<":n v‰liss‰";
}

// aliohjelman m‰‰ritys
void Laske(int eka, int toka)
{
	summa = eka + toka;
}