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
	cout << "������ռ�ռ�Ϊ" << sizeof(son01) << endl;

	//���������зǾ�̬���Զ��ᱻ����̳���ȥ
	//������˽�����Ա������������� ���Է��ʲ�������ȷʵ���̳���
}

int main()
{

	return 0;
}