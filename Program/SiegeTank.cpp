#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 60;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "Attack (Tank) : " << attack << endl;
	cout << "Attack (Siege) : " << attack + 40 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}