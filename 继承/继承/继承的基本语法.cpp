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
	
};

void test01()
{
	son01 a;
	a.m_a = 10;
}
int main()
{
	return 0;
}