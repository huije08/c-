#include <iostream>

using namespace std;

//Unit

    // ���� ����� ��ü�� ������ �� ������
    // �� ���� ������ �ݴ�� �Ҹ��ڰ� ����Ǳ� ������
    // ������ ��ü�� ���� �����ǹǷ� ���� �ִ� ��ü�� 
    // ������ ��� �̹� ������ �޸𸮿� �����ϰ� �˴ϴ�.




class Item
{
private:
    int * price;
    char grade;
public:
    Item(char grade)
    {
        this->grade = grade;

        price = new int;
    }
    
    Item(const Item& clone)
    {
        grade = clone.grade;

        price = new int;
    }

    ~Item()
    {
        delete price;
    }

};

int main()
{
#pragma region ���� ������

#pragma endregion


#pragma region ���� ����


#pragma endregion


#pragma region ���� ����
    // ��ü�� ������ ��, ���� ���� �ƴ� ��ü ��ü�� ����
    // �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� �����Դϴ�.

    //Item posion1('B');
    //Item posion2(posion1);

#pragma endregion



}