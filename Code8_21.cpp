#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
////class Person
////{
////public:
////	string m_name;
////	int m_a;
////	int m_b;
////	int m_c;
////	//Person(int a,int b ,int c)//��ͳ��ʼ��
////	//{
////	//	this->a = a;
////	//	this->b = b;
////	//	this->c = c;
////	//	cout << "�޲ι��캯��" << endl;
////	//}
////	Person(int a,int b,int c):m_a(a), m_b(b), m_c(c)
////	{
////		cout << "�вι��캯��" << endl;
////	}
////	Person(string name)
////	{
////		m_name = name;
////		cout << "�вι��캯��" << endl;
////	}
////	Person( const Person &p)
////	{
////		m_name = p.m_name;
////		cout << "�������캯��" << endl;
////	}
////	~Person()
////	{
////		cout << "��������" << endl;
////	}
////};
////void test()
////{
////	//Person p1();//�����������Ϊ��������
////	Person p1;
////	Person p3("����");
////	Person p2(p3);
////	cout << p2.m_name << endl;
////
////}
//////void test2()
//////{
//////	Person p1 = Person();
//////	/*Person p2 = Person(p1);
//////	Person p3 = Person("վ��");*/
//////	Person();
//////}
////void test3()
////{
////	Person p1;
////	Person p2 = p1;
////	//Person p3 = "����";
////	string name = "acd";
////	Person p3 = name;
////}
////int main()
////{
////	//test();
////	//test2();
////	test3();
////	return 0;
////}
//// 
////���ù��캯���������ΪΪ���󸳳�ֵ;
//void test1()//���ŷ����ù��캯��
//{
//	//�ֶ����ã��������Ͳ����Զ����ã����ֶ����ã��������ͻ��Զ�����
//	//Person p1;//�޲ι���
//	//Person p1();//���ŷ�������ô�����޲ι��캯������Ϊ�����������δ������Ϊ��������
//	Person p2("name");//�вι���
//	Person p3(p2);//�������캯��
//	cout << (p3.m_name==p2.m_name) << endl;//���1
//	//Person(p3);//ע�ⲻҪ���������������ŷ����ÿ������캯������������������Ϊ Person p3���ᷢ���ض���
//}
//void test2()//��ʾ����
//{
//	//Person p1 = Person();//�޲ι���
//	//Person p2 = Person("name");//�вι���
//	//Person p3 = Person(p2);//��������
//	//cout << (p3.m_name == p2.m_name) << endl;//���1
//	//ע�����Person();������һ����������Ĺ��캯�����ã��������󱻸����ֵ�����ڽ���������ֵ�����Ƕ���Ķ���(Ҳ������Ҳ��⣬�Ѿ�����������ת����)
//	//����������������һ�е��þͻᱻ���٣������üȻ٣�
//	//Person("name");//�вε���
//	//���üȻ�
//	//��������вι��캯��
//	//��������
//	//aaa
//	//Person = Person();
//	cout << "aaa" << endl;
//}
//void test3()//��ʽ���ã�������ת��Ϊ��ʾ���ã�
//{
//	string name = "name";
//	//Person p1 = {};//ת��ΪPerson p1=Person();
//	Person p2 = name;//ת��ΪPerson p2=Person(name);
//	Person p3=p2;//ת��ΪPerson p3=person(p2);
//	//ע��������
//	//Person(p3);
//	//Person = p3;
//	//�������󲻹������ַ�ʽ�����ܵ��ÿ������캯��������
//	cout << p3.m_name << endl;
//}
//void test4(Person p)
//{
//	cout << "void test4(Person p)" << endl;
//}
//Person test5()//���ص���һ���������󣬲�����ֵ��
//{
//	Person p("name");
//	return p;//�����������½�һ����������Ȼ����������ͨ������Ŀ������캯������ʼ���ֽ�
//}//���ڸ����������ȥ���������ֱ�ӵ��ô˺������޽��ܷ�����ȴ����ý������ͻᱻ����
//����ú�������ֵ���ڳ�ʼ��ͬ���Ͷ��������������ת��Ϊ�������󣬸��������󲻻���ʧ����ת��Ϊ��������
//���ʱ��ֵ����ֱ�ӽ������ݿ��������ն��󣬲��Ҵ���������������������ͻᱻ���٣�����
//int main()
//{
//	 //test1();
//	//test2();
//	//test3();
//	//Person p;//�޲ι���
//	//test4(p);//�������캯��
//	//�޲ι���
//	Person p=test5(); //���������������
//	Person p2;
//	p2 = test5();//�������������
//	test5();//��������ȵ������ִ�����ᱻ���٣�
//	return 0;
//}
//void test6()
//{
//	Person p1(10,20,30);
//	cout << "p1.a:" << p1.m_a << endl;
//	cout << "p1.b:" << p1.m_b << endl;
//	cout << "p1.c:" << p1.m_c << endl;
//
//}
//class Person
//{
//public:
//	int Age;
//	int* Height;
//	Person(int age,int height)
//	{
//		Age = age;
//		Height = new int(height);
//		cout << "�вι������" << endl;
//	}
//	Person(const Person& p)
//	{
//		Age = p.Age;
//		Height = new int(*p.Height);
//		cout << "������������������" << endl;
//	}
//	~Person()
//	{
//		delete Height;
//		Height = NULL;
//		cout << "��������" << endl;
//	}
//};
//void test7()
//{
//	Person p1(19,170);
//	Person p2 = p1;//ǳ���������׷�����ͬһ���ռ���ж���ͷţ�������
//	cout << p2.Height << endl;
//	cout << p1.Height << endl;
//}
//void test8()
//{
//
//	Person p1(19, 170);
//	Person p2 = p1;//��������׷�����ͬһ���ռ���ж���ͷţ�������������ǳ��������Ľ����
//	cout << p2.Height << endl;
//	cout << p1.Height << endl;
//	cout << *p2.Height << endl;
//	cout << *p1.Height << endl;
//}
//int main()
//{
//	//test6();
//	//test7();
//	test8();
//	system("pause");
//	return 0;
//}
//class Phine
//{
//public:
//	string name;
//	
//	Phine(string Name):name(Name)
//	{
//	}
//
//};
//class Person
//{
//public:
//	int Age;
//	Phine m_PhineNum;
//	Person(int age,Phine phine):Age(age),m_PhineNum(phine)
//	{
//		cout << "Person(int age,Phine phine):Age(age),m_PhineNum(phine)" << endl;
//	}
//	~Person()
//	{
//		/*delete Height;
//		Height = NULL;*/
//		cout << "��������" << endl;
//	}
//};
//void test9()
//{
//	Phine p("С��");
//	Person p1(18, p);
//	cout << p1.Age << endl;
//	cout << p1.m_PhineNum.name << endl;
//
//}
//class Person
//{
//public:
//	int Age;
//	static int m_a;
//	Person()
//	{
//		Age = 0;
//		m_a = 19;
//	}
//	static void show()
//	{
//		cout << "void show()" << endl;
//	}
//	~Person()
//	{
//		cout << "��������" << endl;
//	}
//};
//int Person :: m_a = 0;//��̬��Ա���������������ʼ������һ�������У�
////int Person::Age = 0;
//void test10()
//{
//	Person p1;
//	//p1.m_a = 10;
//	cout<<p1.m_a<<endl;//��̬��Ա���ʷ�ʽ1��
//	cout << Person::m_a << endl;//��̬��Ա���ʷ�ʽ2��
//	p1.show();//��̬�������ʷ�ʽ1��
//	Person::show();//��̬�������ʷ�ʽ2��
//
//}
//int main()
//{
//	//test9();
//	test10();
//	return 0;
//}