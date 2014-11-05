/***********************************************
*Harjoitus 14
*Juho Auvinen
*Kuvaus:
*Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
*Anna (kaikki) etunimesi (merkkijono):
*Anna kengannumero (kokonaisluku):
*Anna sukunimi (merkkijono):
*Anna koulumatka (reaaliluku):
*Anna osoitteesi:
*Anna postinumero:

*Ohjelma tulostaa tiedot seuraavasti:
*sukunimi etunimet
*osoite
*postinumero
*kengannumero ja koulumatka
*
*Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*
*Versio: 1.0
*PVM: 22.10.-14
************************************************/

#include <iostream>
using namespace std;

void main()
{
	char etunimi[50];
	char sukunimi[50];
	char osoite[80];
	int kenkä;
	int postinumero;
	float matka;

	cout << "Anna kaikki etunimesi" << endl;
	cin.get(etunimi,50);
	cin.get();
	
	cout << "Anna kengannumero" << endl;
	cin >> kenkä;
	cin.get();
	
	cout << "Anna sukunimi" << endl;
	cin.get(sukunimi,50);
	cin.get();
	
	cout << "Anna koulumatkasi(km)" << endl;
	cin >> matka;
	cin.get();
	
	cout << "Anna osoitteesi" << endl;
	cin.get(osoite,80);
	cin.get();
	
	cout << "Anna postinumero" << endl;
	cin >> postinumero;
	cin.get();
	
	cout << endl;

	
	cout << sukunimi << " " << etunimi << endl
		<< osoite << endl
		<< postinumero << endl
		<< kenkä << " " << matka << endl;

} 