#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Building
//{
//	friend void ShowHouse1();//声明该全局函数是BUilding的好朋友（该声明位置随意，只要在类里面就行）
//private:
//	string bedroom;
//public:
//	string living_room;
//	Building()
//	{
//		bedroom = "卧室";
//		living_room = "客厅";
//	}
//
//};
//void ShowHouse1()
//{
//	Building p1;
//	cout << "void ShowHouse1()正在访问:" << p1.living_room << endl;
//	cout << "void ShowHouse1()正在访问:" << p1.bedroom << endl;
//}
//int main()
//{
//	ShowHouse1();
//	return 0;
//}
//class Building;//声明一下Building是一个类
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
//	//friend class Person;//向BUilding类声明一下，Person类是你的好朋友
//	friend void Person::ShowHouse2();//声明一下Person类下的ShowHouse2函数是Building类的好朋友
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
//	house->living_room = "客厅2号";
//	//house->bedroom = "卧室2号";//正常情况下我们是无法访问的
//}
//void Person::ShowHouse2()
//{
//	cout << "void ShowHouse1()正在访问:" << house->living_room << endl;
//	cout << "void ShowHouse1()正在访问:" << house->bedroom << endl;//正常情况下我们是无法访问的
//}
//
//Building::Building()
//{
//	bedroom = "卧室";
//	living_room = "客厅";
//}
//int main()
//{
//	Person p1;
//	p1.ShowHouse2();//输出客厅 卧室
//	p1.SetHouse();
//	p1.ShowHouse2();//输出客厅2 卧室
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
//	 Person operator+(Person  p)//成员函数实现重载+
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
//	 //Person& operator++()//成员函数实现前置++
//	 //{
//		// this->m_age++;
//		// this->m_weight++;
//		// return *this;
//	 //}
//	 //Person operator++(int)//成员函数实现后置++
//	 //{
//		// Person tmp = *this;
//		// this->m_age++;
//		// this->m_weight++;
//		// return tmp;
//	 //}
//};
//Person& operator++(Person &p)//成员函数实现前置++
//{
//	p.m_age++;
//	p.m_weight++;
//	return p;
//}
//Person operator++(Person &p,int)//成员函数实现后置++
//{
//	Person tmp = p;
//	p.m_age++;
//	p.m_weight++;
//	return tmp;
//}
////Person operator+(Person p1, Person p2)//全局函数实现重载+
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
//	p3 = p1 + p2+p1;//可以这么简写//本质也是p3=operator+(p1,p2);
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
//	Person(1, 2)("匿名对象的重载（）");
//	tmp("有名对象的重载（）");
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
//	Person& operator++()//前置
//	{
//		this->age++;
//	return *this;
//	}
//	Person operator++(int)//后置
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
		cout << "我是无参构造函数" << endl;
	}
	Person(int a)
	{
		m_age = a;
		cout << "我是有参构造函数" << endl;

	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "我是拷贝构造函数" << endl;

	}
	~Person()
	{
		this->m_age = 19;
		cout << "我是析构函数" << endl;
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
//	Person p1;//无参
//	/*if (Person()(19))
//		cout << "same";
//	else
//		cout << "not same";*/
//	return p1;//拷贝
//}//析构
//int main()
//{
//	Person p2;
//	//p2= test1();//析构
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