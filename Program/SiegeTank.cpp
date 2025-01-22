#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 60;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "Attack ÅÊÅ© : " << attack << endl;
	cout << "Attack ½ÃÁî : " << attack + 40 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}