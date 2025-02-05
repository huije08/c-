#include <iostream>

using namespace std;

class Packet
{
private:
	int errorCode = -9999;

public:
	Packet()
	{
		cout << "Created Packet" << endl;
	}

	const int& ErrorCode()
	{
		return errorCode;
	}
	~Packet()
	{
		cout << "Release Packet" << endl;
	}


};

class Resource
{
public:
	Resource()
	{
		cout << "Created Resource" << endl;
	}

	void Share(const shared_ptr<Resource>& resource)
	{
		sharedPointer = resource;
	}

	~Resource()
	{
		cout << "Release Resource" << endl;
	}

private:
	shared_ptr<Resource> sharedPointer;

};

class Character
{
public:
	Character()
	{
		cout << "Created Character" << endl;
	}

	void Panter(const weak_ptr<Character>& character)
	{
		weakPointer = character;
	}

	~Character()
	{
		cout << "Release Character" << endl;
	}

private:
	weak_ptr<Character> weakPointer;

};

int main()
{
#pragma region 스마트 포인터
	//포인터를 사용하는 동시에 메모리를 자동으로 메모리 관리를
	// 해주며, 경계 확인과 같은 추가 기능을 제공하는 추상
	// 데이터 포인터 형식입니다.

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 
	// 있도록 되어있는 포인터입니다.

	unique_ptr<Packet> uniquePointer = make_unique<Packet>();

	cout << "uniquePointer Error Code : " << uniquePointer->ErrorCode() << endl;

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	// 모든 포인터 객체가 지원 객체를 필요하지 않을때 자원 객체를
	// 해제하도록 설계되어 있는 포인터 입니다.

	//shared_ptr<Resource> oil = make_shared<Resource>();
	//
	//shared_ptr<Resource> mineral = make_shared<Resource>();
	//
	//oil->Share(mineral);
	//mineral->Share(oil);
	//
	//cout << "Oil Reference Count : " << oil.use_count << endl;
	//cout << "Mineral Reference Count : " << mineral.use_count << endl;


#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지  않기 떄문에 공유 포인터로 관리되는
	// 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터 입니다.
	//
	//shared_ptr<Character> warrior = make_shared<Character>();
	//
	//shared_ptr<Character> wizard = make_shared<Character>();
	//
	//warrior->Panter(wizard);
	//wizard->Panter(warrior);
	//	


#pragma endregion



	int* pointer2 = nullptr;

	{
		int* pointer1 = new int;

		*pointer1 = 100;

		pointer2 = pointer1;
	}

	cout << "pointer가 가리키는 값:" << *pointer2 << endl;

#pragma endregion


	return 0;
}