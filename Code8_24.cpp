#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//public:
//	string m_name;
//	Person()
//	{
//		cout << "无参构造函数调用" << endl;
//	}
//	Person(string name)
//	{
//		m_name = name;
//		cout << "有参构造函数调用" << endl;
//	}
//	Person(const Person&p)
//	{
//		m_name = p.m_name;
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//};
//void test1()
//{
//	Person p1;
//	Person p2 = p1;//发生拷贝构造
//}
//void test2(Person p1)
//{
//	cout << p1.m_name << endl;
//}
//Person test3()
//{
//	Person p1("战神");
//	return p1;
//}
//int main()
//{
//	/*Person p("name");
//	test2(p);*/
//	/*Person p2; 
//	p2=test3();*/
//	test3();
//	system("pause");//卡住main函数
//	return 0;
//}
//class Person
//{
//public:
//	int* Age;
//	string m_name;
//	Person(const Person&p)
//	{
//		m_name = p.m_name;
//		cout << "拷贝构造函数调用" << endl;
//	}
//
//};
//void test4()
//{
//	Person p1;//利用无参构造函数初始化
//	//string name = "雷军";
//	//Person p2(name);//利用有参构造函数初始化
//	Person p3(p1);
//	cout << p3.m_name << endl;
//}
//class Person
//{
//private:
//	int* Age;//利用堆区开辟空间
//	string m_name;
//public:
//	void setDate(string name,int age)
//	{
//		m_name = name;
//		Age = new int(age);
//	}
//	int getAge()
//	{
//		return *Age;
//	}
//	string getName()
//	{
//		return m_name;
//	}
//	Person()
//	{
//	}
//	Person(const Person& p)
//	{
//		m_name = p.m_name;
//		Age = new int(*p.Age);
//	}
//	~Person()
//	{
//		delete  Age;
//	}
//
//};
//void test5()
//{
//	Person p1;
//	p1.setDate("张三",19);
//	Person p2(p1);
//	cout <<p1.getName()<< p1.getAge() << endl;
//	cout << p2.getName() << p2.getAge() << endl;
//}
//int main()
//{
//	test5();
//	return 0;
//}
//class Person
//{
//private:
//	static int d;
//	public:
//		int a;
//		int b;
//		static int c;
//	Person(int A, int B) :a(A), b(B)
//	{
//	
//	}
//
//};
//int Person::c=0;
//int Person::d=0;
//int main()
//{
//	Person p1(10, 20);
//	//p1.c = 30;
//	//p1.d = 10;
//	Person::c = 30;
//	cout << p1.a << endl;
//	cout << p1.b << endl;
//	cout << Person::c << endl;
//	return 0;
//}
//class Person
//{
//public:
//	static int a;
//	int b;
//	Person()
//	{
//		b = 0;
//	}
//	static void fun()
//	{
//		a = 10;
//		cout << "static void fun()" << endl;
//		fun1();
//	}
//	void fun1()
//	{
//		cout << "void fun1()" << endl;
//	}
//};
//int Person::a = 0;
//int main()
//{
//	Person p1;
//	//p1.fun();
//	Person::fun();
//	cout << p1.a << endl;
//	return 0;
//}
//class Person
//{
//public:
//	static int c;
//	static int d;
//	static int e;
//	static int a;//静态成员变量，存储在全局区//不属于对象
//	int b;//非静态成员变量，存储在栈上//属于对象
//	static void fun1()//静态成员函数，所有对象共享，只有一份//不属于对象
//	{
//		cout << "static void fun1()" << endl;
//	}
//	void fun2()//非静态成员函数，本质上也是所有对象共享，只有一份，里面有个this指针来区分不同成员变量//不属于对象
//
//	{
//		cout << "void fun2()" << endl;
//	}
//};
//int Person::a = 0;
//int Person::c = 0;
//int Person::d = 0;
//int Person::e = 0;
//int main()
//{
//	cout << sizeof(Person) << endl;
//	return 0;
//}
//class Person
//{
//public:
//	mutable int a;
//	int b;
//public:
//	Person (int a, int b)
//	{
//		this->a = a; 
//		this->b = b;
//	}
//	static void fun2()/*const*/
//	{
//		cout << "void fun2()" << endl;
//	}
//	Person* fun1()
//	{
//		a += 10;
//		return this;
//	}
//};
//int main()
//{
//	const Person p1(10,20);
//	//p1.a = 20;
//	//p1.b = 30;
//	p1.fun2();
//	cout << p1.a << endl;
//	return 0;
//}
////int main()
//{
//	Person* p = NULL;
//	//p->fun2();
//	p->fun1();
//	return 0;
//}
//int main()
//{
//	/*Person p1(10, 20);
//	p1.fun1()->fun1()->fun1()->fun1();
//	cout << p1.a << endl;
//	cout << p1.b << endl;*/
//
//		return 0;
//}
class Person
{
protected:
	string name;
public:
	void setdate( Person  p)
	{
		//name = p.name;
	}

};
//class man
//{
//	string name;
//	void set(const Person& p)
//	{
//		name = p.name;
//	}
//
//};