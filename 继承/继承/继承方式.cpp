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


//public继承
class son01 : public base
{

};

void test01()
{
	son01 a;
	a.m_a = 10;
	//a.m_c  不可访问  父类中私有的 子类不可访问
}

//protected继承
class son02 :protected base
{

};

void test()
{
	son02 b;
	//b.m_a; //  不可访问  用protected继承 那public也会变成protected
}

class son03 :private base
{

};

void test()
{
	son03 b;
	//b.m_a; //  不可访问  用private继承 那public和protected也 变成  private
}

int main()
{
	return 0;
}