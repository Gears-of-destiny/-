#include <iostream>
using namespace std;

class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son01 : public base
{
public:
	int m_d;
};

void test01()
{
	cout << "子类所占空间为" << sizeof(son01) << endl;

	//父类中所有非静态属性都会被子类继承下去
	//父类中私有属性被编译器隐藏了 所以访问不到，但确实被继承了
}

int main()
{

	return 0;
}