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


//public�̳�
class son01 : public base
{

};

void test01()
{
	son01 a;
	a.m_a = 10;
	//a.m_c  ���ɷ���  ������˽�е� ���಻�ɷ���
}

//protected�̳�
class son02 :protected base
{

};

void test()
{
	son02 b;
	//b.m_a; //  ���ɷ���  ��protected�̳� ��publicҲ����protected
}

class son03 :private base
{

};

void test()
{
	son03 b;
	//b.m_a; //  ���ɷ���  ��private�̳� ��public��protectedҲ ���  private
}

int main()
{
	return 0;
}