#include "SiegeTank.h"

SiegeTank::SiegeTank()
{
	health = 150;
	attack = 60;
	defense = 1;
}

void SiegeTank::Stats()
{
	cout << "Attack ��ũ : " << attack << endl;
	cout << "Attack ���� : " << attack + 40 << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}