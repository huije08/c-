#include "Goliath.h"


Goliath::Goliath()
{
	health = 125;
	attack = 12;
	defense = 1;
}

void Goliath::Stats()
{
	cout << "Attack ���� : " << attack << endl;
	cout << "Attack ���� : " << attack + 8 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}