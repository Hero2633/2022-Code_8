#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//private:
//	int m_Age;
//public:
//	void setM_Age(int age)//ͨ����Ա����������˽�����Ե�ֵ������д��
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "���������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	int getM_Age()//ͬ��ͨ����Ա����������˽�����Ե�ֵ�����ƶ���
//	{
//		return m_Age;
//	}
//
//};
//void test1()
//{
//	Person p1;
//	//p1.m_Age = 18;//���ǿ��Է��������޷�ֱ���޸�˽�����Ե�ֵ��
//	//cout << p1.m_Age << endl;//����Ҳ�޷�ֱ�Ӷ�ȡ˽�����Ե�ֵ��
//	p1.setM_Age(10);
//	int age = p1.getM_Age();
//	cout << age << endl;
//}
//class Person
//{
//public:
//	string m_name;
//private:
//	int m_age;
//public:
//	Person()
//	{
//		cout << "���캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//
//};
//void test2()
//{
//	Person p1;//����û�е��ù������������
//}
//int main()
//{
//	//test1();
//	//test2();
//	Person p1;
//	p1.~Person();
//	p1.m_name = "name";
//	//system("pause");
//	return 0;
//}
class Person
{
public:
	string m_name;
	Person()
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(string name)
	{
		m_name = name;
		cout << "�вι��캯������" << endl;
	}
	Person(const Person&p)
	{
		m_name = p.m_name;
		cout << "�������캯������" << endl;
	}
	~Person()
	{
		cout << "������������" << endl;
	}
};
//void test3()//���ŷ�
//{
//	//Person p1;//�޲ε���
//	Person p1();
//	Person p2("name");//�вε���
//	Person p3(p2);//��������
//	cout << (p2.m_name == p3.m_name) << endl;//�ж�һ���Ƿ�ɹ�����
//}
//void test4()//��ʾ��
//{
//	Person p1 = Person();
//	Person p2 = Person("name");
//	//Person p3 = Person(p2);
//	Person(p2);
//	//cout << (p2.m_name == p3.m_name) << endl;//�ж�һ���Ƿ�ɹ�����x	
//	//Person("name");
//	//cout << "Aaa" << endl;
//}
void test5()//��ʽת����
{
	Person p1 = {};//�޲�//�൱��Person p1=Person();
	string name = "aaaa";
	Person p2 = name;//�в�//�൱�� Person p2=Person(name);
	Person p3 = p2;//����//�൱��Person p3=Person(p2);
}
int main()
{
	//test3();
	//test4();
	test5();
	return 0;
}

//sum=sum*10+i;
//ret=ret+sum;