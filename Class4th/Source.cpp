#include <iostream>

using namespace std;

//Unit

    // 얕은 복사는 객체가 해제될 때 생성자
    // 의 실행 순서와 반대로 소멸자가 실행되기 떄문에
    // 복사한 객체가 먼저 해제되므로 원래 있던 객체가 
    // 해제될 대는 이미 해제된 메모리에 접근하게 됩니다.




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
#pragma region 복사 생성자

#pragma endregion


#pragma region 얕은 복사


#pragma endregion


#pragma region 깊은 복사
    // 객체를 복사할 때, 참조 값이 아닌 객체 자체를 새로
    // 복사하여 서로 다른 메모리를 생성하는 복사입니다.

    //Item posion1('B');
    //Item posion2(posion1);

#pragma endregion



}