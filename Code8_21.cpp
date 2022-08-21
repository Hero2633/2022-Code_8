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
////	//Person(int a,int b ,int c)//传统初始化
////	//{
////	//	this->a = a;
////	//	this->b = b;
////	//	this->c = c;
////	//	cout << "无参构造函数" << endl;
////	//}
////	Person(int a,int b,int c):m_a(a), m_b(b), m_c(c)
////	{
////		cout << "有参构造函数" << endl;
////	}
////	Person(string name)
////	{
////		m_name = name;
////		cout << "有参构造函数" << endl;
////	}
////	Person( const Person &p)
////	{
////		m_name = p.m_name;
////		cout << "拷贝构造函数" << endl;
////	}
////	~Person()
////	{
////		cout << "析构函数" << endl;
////	}
////};
////void test()
////{
////	//Person p1();//编译器会解释为函数声明
////	Person p1;
////	Person p3("张三");
////	Person p2(p3);
////	cout << p2.m_name << endl;
////
////}
//////void test2()
//////{
//////	Person p1 = Person();
//////	/*Person p2 = Person(p1);
//////	Person p3 = Person("站啊");*/
//////	Person();
//////}
////void test3()
////{
////	Person p1;
////	Person p2 = p1;
////	//Person p3 = "娜娜";
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
////调用构造函数可以理解为为对象赋初值;
//void test1()//括号法调用构造函数
//{
//	//手动调用，编译器就不会自动调用；不手动调用，编译器就会自动调用
//	//Person p1;//无参构造
//	//Person p1();//括号法不能这么调用无参构造函数，因为编译器会把这段代码解释为函数声明
//	Person p2("name");//有参构造
//	Person p3(p2);//拷贝构造函数
//	cout << (p3.m_name==p2.m_name) << endl;//输出1
//	//Person(p3);//注意不要对匿名对象用括号法调用拷贝构造函数；编译器会把其解释为 Person p3；会发生重定义
//}
//void test2()//显示调用
//{
//	//Person p1 = Person();//无参构造
//	//Person p2 = Person("name");//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//	//cout << (p3.m_name == p2.m_name) << endl;//输出1
//	//注意事项：Person();本质是一个匿名对象的构造函数调用，匿名对象被赋完初值过后，在将匿名对象赋值给我们定义的对象(也可以这也理解，已经将匿名对象转正了)
//	//并且匿名对象在这一行调用就会被销毁，及即用既毁；
//	//Person("name");//有参调用
//	//即用既毁
//	//先输出：有参构造函数
//	//析构函数
//	//aaa
//	//Person = Person();
//	cout << "aaa" << endl;
//}
//void test3()//隐式调用（本质是转换为显示调用）
//{
//	string name = "name";
//	//Person p1 = {};//转换为Person p1=Person();
//	Person p2 = name;//转换为Person p2=Person(name);
//	Person p3=p2;//转换为Person p3=person(p2);
//	//注意匿名对
//	//Person(p3);
//	//Person = p3;
//	//匿名对象不管用那种方式都不能调用拷贝构造函数！！！
//	cout << p3.m_name << endl;
//}
//void test4(Person p)
//{
//	cout << "void test4(Person p)" << endl;
//}
//Person test5()//返回的是一个匿名对象，不是数值；
//{
//	Person p("name");
//	return p;//编译器会重新建一个匿名对象，然后匿名对象通过自身的拷贝构造函数来初始化字节
//}//关于该匿名对象的去留，如果是直接调用此函数，无接受方，则等待调用结束，就会被销毁
//如果该函数返回值用于初始化同类型对象，则该匿名对象转换为有名对象，该匿名对象不会消失，会转换为有名对象
//如果时赋值，则直接将其数据拷贝进接收对象，并且待该语句结束，该匿名对象就会被销毁！！！
//int main()
//{
//	 //test1();
//	//test2();
//	//test3();
//	//Person p;//无参构造
//	//test4(p);//拷贝构造函数
//	//无参构造
//	Person p=test5(); //匿名对象变有名；
//	Person p2;
//	p2 = test5();//匿名对象变有名
//	test5();//匿名对象等到该语句执行完便会被销毁；
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
//		cout << "有参构造调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		Age = p.Age;
//		Height = new int(*p.Height);
//		cout << "（深拷贝）拷贝构造调用" << endl;
//	}
//	~Person()
//	{
//		delete Height;
//		Height = NULL;
//		cout << "析构函数" << endl;
//	}
//};
//void test7()
//{
//	Person p1(19,170);
//	Person p2 = p1;//浅拷贝，容易发生对同一快块空间进行多次释放！！！；
//	cout << p2.Height << endl;
//	cout << p1.Height << endl;
//}
//void test8()
//{
//
//	Person p1(19, 170);
//	Person p2 = p1;//深拷贝，容易发生对同一快块空间进行多次释放！！！；（对于浅拷贝问题的解决）
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
//		cout << "析构函数" << endl;
//	}
//};
//void test9()
//{
//	Phine p("小米");
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
//		cout << "析构函数" << endl;
//	}
//};
//int Person :: m_a = 0;//静态成员类内声明，类外初始化（少一步都不行）
////int Person::Age = 0;
//void test10()
//{
//	Person p1;
//	//p1.m_a = 10;
//	cout<<p1.m_a<<endl;//静态成员访问方式1：
//	cout << Person::m_a << endl;//静态成员访问方式2：
//	p1.show();//静态函数访问方式1：
//	Person::show();//静态函数访问方式2：
//
//}
//int main()
//{
//	//test9();
//	test10();
//	return 0;
//}