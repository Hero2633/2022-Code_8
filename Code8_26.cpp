#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Building
//{
//	friend void ShowHouse1();//������ȫ�ֺ�����BUilding�ĺ����ѣ�������λ�����⣬ֻҪ����������У�
//private:
//	string bedroom;
//public:
//	string living_room;
//	Building()
//	{
//		bedroom = "����";
//		living_room = "����";
//	}
//
//};
//void ShowHouse1()
//{
//	Building p1;
//	cout << "void ShowHouse1()���ڷ���:" << p1.living_room << endl;
//	cout << "void ShowHouse1()���ڷ���:" << p1.bedroom << endl;
//}
//int main()
//{
//	ShowHouse1();
//	return 0;
//}
//class Building;//����һ��Building��һ����
//class Person
//{
//public:
//	Building* house;
//	Person();
//	void SetHouse();
//	void ShowHouse2();
//};
//class Building
//{
//	//friend class Person;//��BUilding������һ�£�Person������ĺ�����
//	friend void Person::ShowHouse2();//����һ��Person���µ�ShowHouse2������Building��ĺ�����
//private:
//	string bedroom;
//public:
//	string living_room;
//	Building();
//
//};
//
//Person::Person()
//{
//	house = new Building;
//}
//void Person:: SetHouse()
//{
//	house->living_room = "����2��";
//	//house->bedroom = "����2��";//����������������޷����ʵ�
//}
//void Person::ShowHouse2()
//{
//	cout << "void ShowHouse1()���ڷ���:" << house->living_room << endl;
//	cout << "void ShowHouse1()���ڷ���:" << house->bedroom << endl;//����������������޷����ʵ�
//}
//
//Building::Building()
//{
//	bedroom = "����";
//	living_room = "����";
//}
//int main()
//{
//	Person p1;
//	p1.ShowHouse2();//������� ����
//	p1.SetHouse();
//	p1.ShowHouse2();//�������2 ����
//}
//class Person
//{
//public:
//	int m_age;
//	int m_weight;
//	Person()
//	{
//		m_age = 0;
//		m_weight = 0;
//	}
//	 Person(int age, int weight) :m_age(age), m_weight(weight)
//	{
//		;
//	}
//	 Person operator+(Person  p)//��Ա����ʵ������+
//	 {
//		 Person tmp;
//		 tmp.m_age = m_age + p.m_age;
//		 tmp.m_weight = m_weight + p.m_weight;
//		 return tmp;
//	 }
//	 /*ostream& operator<<(ostream&out)
//	 {
//		 out << m_age << " " << m_weight ;
//		 return out;
//	 }*/
//	 //Person& operator++()//��Ա����ʵ��ǰ��++
//	 //{
//		// this->m_age++;
//		// this->m_weight++;
//		// return *this;
//	 //}
//	 //Person operator++(int)//��Ա����ʵ�ֺ���++
//	 //{
//		// Person tmp = *this;
//		// this->m_age++;
//		// this->m_weight++;
//		// return tmp;
//	 //}
//};
//Person& operator++(Person &p)//��Ա����ʵ��ǰ��++
//{
//	p.m_age++;
//	p.m_weight++;
//	return p;
//}
//Person operator++(Person &p,int)//��Ա����ʵ�ֺ���++
//{
//	Person tmp = p;
//	p.m_age++;
//	p.m_weight++;
//	return tmp;
//}
////Person operator+(Person p1, Person p2)//ȫ�ֺ���ʵ������+
////{
////	Person tmp;
////	tmp.m_age = p1.m_age + p2.m_age;
////	tmp.m_weight = p1.m_weight + p2.m_weight;
////	return tmp;
////}
//ostream& operator<<(ostream& out,Person p)
//{
//	out << p.m_age << " " << p.m_weight;
//	return out;
//}
//void test1()
//{
//	Person p1(1,1);
//	Person p2(2, 3);
//	Person p3;
//	Person& p4 = p3;
//	p3 = p1 + p2+p1;//������ô��д//����Ҳ��p3=operator+(p1,p2);
//	cout << p3.m_age << endl;
//	cout << p3.m_weight << endl;
//
//}
//void test2()
//{
//	Person p(10, 19);
//	//p << cout;
//	(cout << p)<<p+p;
//}
//void test3()
//{
//	Person p;
//	cout << ++++++p << endl;
//}
//void test4()
//{
//	Person p;
//	cout << p++ << endl;
//	cout << p << endl;
//
//}
//int main()
//{
//	//test2();
//	//test1();
//	 test3();
//	test4();
//	return 0;
//}
//class Person
//{
//public:
//	int age;
//	int* height;
//	Person(int a,int b)
//	{
//		age = a;
//		height = new int(b);
//	}
//	~Person()
//	{
//		delete height;
//	}
//	Person& operator=(Person& p)
//	{
//		this->age = p.age;
//		*this->height = *p.height;
//		return *this;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->age == p.age && *this->height == *p.height)
//			return true;
//		return false;
//	
//	}
//	void operator()(string name)
//	{
//		cout << "your name is:" << name << endl;
//	}
//};
//int main()
//{
//	//Person p1(1,170);
//	//Person p2(2, 200);
//	////p1 = p2;
//	//if (p1 == p2)
//	//	cout << "same" << endl;
//	//else
//	//	cout << "not same" << endl;
//	Person tmp(1,1);
//	Person(1, 2)("������������أ���");
//	tmp("������������أ���");
//	/*p1 = p2;
//	cout << p1.age <<" " << p1.height <<" " <<*p1.height<< endl;
//	cout << p2.age << " " << p2.height << " " << *p2.height<<endl;*/
//
//	return 0;
//}
//class Person
//{
//public:
//	int age;
//	Person()
//	{
//		age = 0;
//	}
//	Person& operator++()//ǰ��
//	{
//		this->age++;
//	return *this;
//	}
//	Person operator++(int)//����
//	{
//		Person tmp = *this;
//		this->age++;
//		return tmp;
//	}
//};
//ostream& operator<<(ostream& out, const Person &p)
//{
//	//p.age = 0;
//	out << p.age << endl;
//	return out;
//}
//Person test11()
//{
//	Person tmp;
//	return tmp;
//}
//int main()
//{
//	Person p;
//	const Person p1;
//	const Person& p2 = p1;
//	Person p9 = Person();
//	Person p12 = test11();
//	p12.age = 10;
//	cout << p++;
//	cout << ++p;
//	return 0;
//}
class Person
{
public:
	int m_age;
	Person()
	{
		m_age = 0;
		cout << "�����޲ι��캯��" << endl;
	}
	Person(int a)
	{
		m_age = a;
		cout << "�����вι��캯��" << endl;

	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "���ǿ������캯��" << endl;

	}
	~Person()
	{
		this->m_age = 19;
		cout << "������������" << endl;
	}
	bool operator()(int a)
	{
		if (a == m_age)
			return true;
		return false;
	}
};
//Person test1()
//{
//	Person p1;//�޲�
//	/*if (Person()(19))
//		cout << "same";
//	else
//		cout << "not same";*/
//	return p1;//����
//}//����
//int main()
//{
//	Person p2;
//	//p2= test1();//����
//	test1();
//	return 0;
//}
//
//void test1(const Person&p)
//{
//	cout << p.m_age;
//}
//int main()
//{
//	const Person p1;
//	test1(p1);
//	return 0;
//}
//int main()
//{
//	Person p1;
//	p1.m_age = 10;
//	const Person& p2 = p1;
//	/*char arr[] = "aaaaa";
//	printf(arr);*/
//	return 0;
//}