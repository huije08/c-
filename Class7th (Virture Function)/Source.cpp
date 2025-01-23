#include <iostream>
#include "../Program/Terran.h"
#include "../Program/SiegeTank.h"
#include "../Program/Vulture.h"
#include "../Program/Goliath.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 
	// 재정의될 수 있는 함수입니다

	//Terran* terran = new Goliath();
	//
	//terran->Stats();
	//
	//cout << "Terran의 메모리 크기 : " << sizeof(Terran) << endl;

	//가상 함수는 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다
#pragma endregion

#pragma region 가상함수 포인터

	int count = 0;
	int num;

	Terran terran;
	Vulture vulture;
	Goliath goliath;
	SiegeTank siegeTank;


	//while (count<5)
	//{
	//	cout << "Enter number" << endl;
	//	cin >> num;
	//
	//	switch (num)
	//	{
	//	case 1:
	//		cout << "Vulture Created." << endl;
	//		vulture.Stats();
	//		count++;
	//		cout << endl;
	//		break;
	//
	//	case 2:
	//		cout << "SiegeTank Created." << endl;
	//		siegeTank.Stats();
	//		count++;
	//		cout << endl;
	//		break;
	//
	//	case 3:
	//		cout << "Goliath Created." << endl;
	//		goliath.Stats();
	//		count++;
	//		cout << endl;
	//		break;
	//
	//	default:
	//		cout << "The number is invalid. Please enter it again." << endl;
	//		cout << endl;
	//		break;
	//	}
	//	
	//}
	//cout << "All opportunities exhausted" << endl;

	//while (count < 5)
	//{
	//	cout << "Enter number" << endl;
	//	cin >> num;
	//
	//	switch (num)
	//	{
	//	case 1: pointer = new Vulture();
	//		break;
	//	case 2: pointer = new SiegeTank();
	//		break;
	//	case 3: pointer = new Goliath();
	//		break;
	//	default: continue
	//		break;
	//	}
	//}


	// 가상 함수는 한 개 이상의 가상함수를 포함하는 클래스가
	// 있을 때 객체 주소에 가상 함수 테이블을 추가합니다.
#pragma endregion

	return 0;
}