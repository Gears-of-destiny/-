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
//	//�������ĳ�Ա�븸��ͬ��   ��ôҪ���ʸ����Ա��Ҫ��������
//	cout << "son��m_a" << a.m_a << endl;
//	cout << "base��m_a" << a.base::m_a << endl;
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