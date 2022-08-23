#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
//class Person
//{
//private:
//	int m_Age;
//public:
//	void setM_Age(int age)//通过成员函数来设置私有属性的值（控制写）
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "你个老妖怪" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	int getM_Age()//同理，通过成员函数来设置私有属性的值（控制读）
//	{
//		return m_Age;
//	}
//
//};
//void test1()
//{
//	Person p1;
//	//p1.m_Age = 18;//我们可以发现我们无法直接修改私有属性的值；
//	//cout << p1.m_Age << endl;//我们也无法直接读取私有属性的值；
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
//		cout << "构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//};
//void test2()
//{
//	Person p1;//我们没有调用构造和析构函数
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
		cout << "无参构造函数调用" << endl;
	}
	Person(string name)
	{
		m_name = name;
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person&p)
	{
		m_name = p.m_name;
		cout << "拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
	}
};
//void test3()//括号法
//{
//	//Person p1;//无参调用
//	Person p1();
//	Person p2("name");//有参调用
//	Person p3(p2);//拷贝调用
//	cout << (p2.m_name == p3.m_name) << endl;//判断一下是否成功拷贝
//}
//void test4()//显示法
//{
//	Person p1 = Person();
//	Person p2 = Person("name");
//	//Person p3 = Person(p2);
//	Person(p2);
//	//cout << (p2.m_name == p3.m_name) << endl;//判断一下是否成功拷贝x	
//	//Person("name");
//	//cout << "Aaa" << endl;
//}
void test5()//隐式转化法
{
	Person p1 = {};//无参//相当于Person p1=Person();
	string name = "aaaa";
	Person p2 = name;//有参//相当于 Person p2=Person(name);
	Person p3 = p2;//拷贝//相当于Person p3=Person(p2);
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