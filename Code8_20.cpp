#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
#include"Head.h"
using namespace std;
//int* fun()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = new int[10]{199};
//	cout << *p << endl;
//	delete [] p;
//	system("pause");
//	return 0;
//}
//int g_a = 10;
//const int g_b = 20;
//int main()
//{
//	int a = 10;
//	const int b = 10;
//	int arr[10] = { 1 };
//	cout << "ȫ����:"<<endl;
//	cout << &g_a << endl;
//	cout << &g_b << endl;
//	cout << &"abcd" << endl;
//	cout << "ջ����" << endl;
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << arr << endl;
//	cout << "����:"<<endl;
//	int* p1 = new int(1);
//	int *p2 = new int(2);
//	int *p3 = new int[10]{ 1 };
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << p3 << endl;
//	return 0;
//}
//int* fun()
//{
//	int a = 9;
//	return &a;
//}
//int main()
//{
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}
//int main()
//{
//	const int& c = 12;//������ȷ��д�����﷨֧��
//	cout << c << endl;
//	return 0;
//}
//int& fun()
//{
//	static int b = 19;
//	return b;
//}
//int main()
//{
//	int& ret = fun();
//	cout << ret << endl;
//	fun() = 199;
//	cout << ret << endl;
//	return 0;
//}
//int Add(int x, int y, int z=10, int =10, int b=0, int c=0);//����д��
//int Add(int x, int y,int z=20,int a=10,int b=1,int c=1)
//{
//	return x + y+z+a+b+c;
//}

//int Add(int x, int y, double=10.1)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = Add(50, 10);
//	cout << ret << endl;
//	return 0;
//}
//
//void fun(int &b)
//{
//	cout << "fun(int &b)" << endl;
//}
//void fun(const int &b)
//{
//	cout << "fun(const int &b)" << endl;
//}
//int main()
//{
//	//fun();
//	int a = 10;
//	//fun(a);
//	fun(10);
//	return 0;
//}

//struct students//һ�����������ʽ��
//{//////////////1������Ȩ�ޣ�Ĭ��˽�У�://public:������private:˽�У�protected:����
//public:
//	string name;
//
//	string sex;
//	string num;
//	int age;
//	//����
//	void showMessage()
//	{
//		cout << "����:" << name << endl;
//		cout << "�Ա�:" << sex << endl;
//		cout << "����:" << age << endl;
//		cout << "ѧ��:" << num << endl;
//	}
//};
struct C1
{
	int a;
};
//class C2
//{
//	int a;
//};
//int main()
//{
//
//	 C1 p1 = {};
//	p1.a = 10;
//	cout << p1.a << endl;
//	C2 p2 = {};
//	p2.a = 19;
//	cout << p2.a << endl;
//
//
	//students s1 = {};//���嵽һ����
	//s1.age = 10;
	//s1.name = "С��";
	//s1.num = "110112120119";
	//s1.sex = "Ů";
	//s1.showMessage();
//	return 0;
////}
//class Dot
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setX(int x)//���ú�����
//	{
//		m_x = x;
//	}
//	void setY(int y)//����������
//	{
//		m_y = y;
//	}
//
//	int getX()//��ȡ������
//	{
//		return m_x;
//	}
//	int getY()//��ȡ������
//	{
//		return m_y;
//	}
//};
//class Circle
//{
//private:
//	int m_R;
//	Dot mid;
//public :
//	void setDot(Dot p)//����Բ��
//	{
//		mid = p;
//	}
//	void setR(int r)//���ð뾶
//	{
//		m_R = r;
//	}
//	int getR()//��ȡ�뾶
//	{
//		return m_R;
//	}
//	Dot getDot()//��ȡԲ��
//	{
//		return mid;
//	}
//
//};
//void location(Circle &c1,Dot &p)
//{
//	int distance = (c1.getDot().getX() - p.getX())  * (c1.getDot().getX() - p.getX()) + (c1.getDot().getY() - p.getY()) * (c1.getDot().getY() - p.getY());
//	int RR = c1.getR() * c1.getR();
//	if (distance == RR)
//		cout << "��Բ��" << endl;
//	else if (distance > RR)
//	{
//		cout << "��Բ��" << endl;
//	}
//	else
//		cout << "��Բ��" << endl;
////}
//int main()
//{
//	Circle c1 = {};
//	Dot a = {};
//	a.setX(0);
//	a.setY(0);
//	c1.setDot(a);//����Բ��
//	//c1.setDot(10,0);
//	c1.setR(10);//���ð뾶
//	Dot p = {};
//	p.setX(10);
//	p.setY(0);//���õ�
//	location(c1,p);
//	return 0;
//}

//class cuboid
//{
//private:
//	int m_W;
//	int m_H;
//	int m_L;
//
//public:
//	void setm_L(int l)//���ó�
//	{
//		m_L = l;
//	}
//	void setm_W(int w)//���ÿ�
//	{
//		m_W = w;
//	}
//	void setm_H(int h)//���ø�
//	{
//		m_H = h;
//	}
//	int getm_L()//��ȡ��
//	{
//		return m_L;
//	}
//	int getm_W()//��ȡ��
//	{
//		return m_W;
//	}
//	int getm_H()//��ȡ��
//	{
//		return m_H;
//	}
//	int CalculateS()//��������
//	{
//		return (m_L * m_H + m_L * m_W + m_H * m_W) * 2;
//	}
//	int CalculateV()//�������
//	{
//		return m_H * m_L * m_W;
//	}
//	bool is_Same(cuboid& c2)
//	{
//		if (getm_H() == c2.getm_H() && getm_L() == c2.getm_L() && getm_W() == c2.getm_W())
//			return true;
//		return false;
//	}
//};
//bool is_g_Same(cuboid& c1, cuboid& c2)//��Ա�����ж������������Ƿ�һ��
//{
//	if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
//		return true;
//	return false;
//}
//int main()
//{
//	cuboid c1 = {};
//	c1.setm_H(10);
//	c1.setm_L(10);
//	c1.setm_W(10);
//	cout << "c1��S��" << c1.CalculateS() <<"\nc1��V��" << c1.CalculateV() << endl;
//	cuboid c2 = {};
//	c2.setm_H(10);
//	c2.setm_L(10);
//	c2.setm_W(10);
//	cout << "c2��S��" << c2.CalculateS() << "\nc2��V��" << c2.CalculateV() << endl;
//	//bool ret= is_g_Same(c1,c2);
//	bool ret = c1.is_Same(c2);
//	if (ret)
//		cout << "same" << endl;
//	else
//		cout<<"not same" << endl;
//	return 0;
//}
//class person
//{
//private:
//	string Name;//�ɶ���д
//	string Sex;//��д
//	int Age;//�ɶ���
//public :
//	void setName(string name)//��д
//	{
//		Name = name;
//	}
//	string getName()//�ɶ�
//	{
//		return Name;
//	}
//	void setSex(string sex)//��д
//	{
//		Sex = sex;
//	}
//	int getAge()//�ɶ�
//	{
//		if (Age < 0 || Age>120)
//		{	
//			Age = 0;
//			cout << "�����Ǹ�����" << endl;
//	    }
//		return Age;
//	}
//	void setAge(int age)
//	{
//		Age = age;
//	}
//
//};
//int main()
//{
//	person p1 = {};
//	//p1.Name = "����";
//	p1.setName("����");
//	cout << p1.getName() << endl;
//	p1.setSex("��");
//	//cout << p1.getSex() << endl;
//	p1.setAge(100);
//	cout << p1.getAge() << endl;
//
//	return 0;
//}
//class Dot
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setX(int x)//���ú�����
//	{
//		m_x = x;
//	}
//	void setY(int y)//����������
//	{
//		m_y = y;
//	}
//
//	int getX()//��ȡ������
//	{
//		return m_x;
//	}
//	int getY()//��ȡ������
//	{
//		return m_y;
//	}
//};
//void Dot::setX(int x)//���ú�����
//{
//m_x = x;
//}
void Dot::setX(int x)//���ú�����
{
	m_x = x;
}
void Dot::setY(int y)//����������
{
	m_y = y;
}

int Dot::getX()//��ȡ������
{
	return m_x;
}
int Dot::getY()//��ȡ������
{
	return m_y;
}
void Circle:: setDot(Dot p)//����Բ��
{
	mid = p;
}
void Circle::setR(int r)//���ð뾶
{
	m_R = r;
}
int Circle::getR()//��ȡ�뾶
{
	return m_R;
}
Dot Circle::getDot()//��ȡԲ��
{
	return mid;
}
Circle::Circle()//����һ�����ͻ��Զ�����
{
	//Circle::mid;
	cout << "���캯������" << endl;
}
Circle::~Circle()//����һ���پͻ��Զ�����
{
	cout << "���������ĵ���" << endl;
}
//int main()
//{
//
//	return 0;
//}
void test()
{
	Circle p1;
}
int main()
{
	//test();
	Circle p1;
	p1.~Circle();
	///p1.Circle();
	system("pause");
	return 0;
}