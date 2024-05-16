#include<iostream>
using namespace std;

class base01
{
public:
	int a;
};

class base02
{
public:
	int a;
};

class son :public base01, public base02
{

};

void test01()
{
	son a;
	a.base01::a = 10;
	a.base02::a = 20;
	cout << a.base01::a << endl << a.base02::a << endl;



}
int main()
{
	test01();

	return 0;
}