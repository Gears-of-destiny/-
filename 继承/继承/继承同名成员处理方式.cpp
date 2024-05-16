#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		m_a = 10;
	}
	int m_a;
	void fun()
	{
		cout << "base" << endl;
	}
};

class son :public base
{
public:
	son()
	{
		m_a = 20;
	}
	int m_a;
	void fun()
	{
		cout << "son" << endl;
	}
};

//void test01()
//{
//	son a;
//	//如果子类的成员与父类同名   那么要访问父类成员需要加作用域
//	cout << "son的m_a" << a.m_a << endl;
//	cout << "base的m_a" << a.base::m_a << endl;
//}

void test02()
{
	son a;
	a.fun();
	a.base::fun();
}
int main()
{
	test02();

	return 0;
}