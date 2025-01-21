#include <iostream>

using namespace std;

class Unit
{
protected:
	int health;
	int defense;

};

class Marine : public Unit
{
private:
	int attack;
public:
	Marine()
	{
		attack = 6;
		health = 40;
		defense = 0;

		cout << "Marine Created" << endl;
	}

	void Stats()
	{
		cout << "MR Health : " << health << endl;
		cout << "MR Defense : " << defense << endl;
		cout << "MR Attack : " << attack << endl;
	}
};

class Ghost : public Unit
{
private:
	int attack;

public:
	Ghost()
	{
		attack = 10;
		health = 45;
		defense = 0;

		cout << "Ghost Created" << endl;
	}

	void Stats()
	{
		cout << "GS Health : " << health << endl;
		cout << "GS Defense : " << defense << endl;
		cout << "GS Attack : " << attack << endl;
	}

};

class Firebat : public Unit
{
private:
	int attack;
	int health;
	int defense;
public:
	Firebat()
	{
		attack = 16;
		health = 50;
		defense = 1;

		cout << "Firebat Created" << endl;
	}

	void Stats()
	{
		cout << "FB Health : " << health << endl;
		cout << "FB Defense : " << defense << endl;
		cout << "FB Attack : " << attack << endl;
	}
};



int main()
{
#pragma region 캡슐화
	//클래스 안에 서로 여노간되어 있느 속성들과 기능들을 하나의 캡슐로
	// 데이터를 외부로부터 보호하며, 사용자에게 인터페이스를
	// 제공하여 클래스의 기능을 사용하게 하는것입니다.
#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정해주는 기능입니다.

	Unit terran;

	Marine marine;
	marine.Stats();

	Ghost ghost;
	ghost.Stats();

	Firebat firebat;
	firebat.Stats();

	cout << "Terran 객체의 메모리 크기 : " << sizeof(Unit) << endl;
	cout << "Marine 객체의 메모리 크기 : " << sizeof(Marine) << endl;
	cout << "Ghost 객체의 메모리 크기 : " << sizeof(Ghost) << endl;
	cout << "Firebat 객체의 메모리 크기 : " << sizeof(Firebat) << endl;


	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의 
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion


	return 0;
}