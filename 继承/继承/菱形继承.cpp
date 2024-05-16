#include<iostream>
using namespace std;

class animal
{
public:
	int a = 0;
};

//因为菱形继承中的父类继承于同一个爷爷类，所以孙子类会继承重复造成资源浪费
//所以要用虚继承  在前面加virtual
//animal被称为 虚基类
//此时a只有一份
class sheep : virtual public animal
{};
class tuo :virtual public animal
{};

class sheeptuo :public sheep, public tuo
{
};

void test01()
{
	sheeptuo b;
	b.sheep::a = 10;
	b.tuo::a = 20;
	cout<< b.sheep::a << endl;
	cout<< b.tuo::a << endl;
	cout << b.a << endl;

	/*sheep b;
	tuo v;
	b.a = 10;
	v.a = 20;

	cout << b.a << endl;
	cout << v.a << endl;*/
}

int main()
{
	test01();
	return 0;
}