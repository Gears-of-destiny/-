#include<iostream>
using namespace std;

class animal
{
public:
	int a = 0;
};

//��Ϊ���μ̳��еĸ���̳���ͬһ��үү�࣬�����������̳��ظ������Դ�˷�
//����Ҫ����̳�  ��ǰ���virtual
//animal����Ϊ �����
//��ʱaֻ��һ��
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