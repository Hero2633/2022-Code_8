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
//	cout << "全局区:"<<endl;
//	cout << &g_a << endl;
//	cout << &g_b << endl;
//	cout << &"abcd" << endl;
//	cout << "栈区：" << endl;
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << arr << endl;
//	cout << "堆区:"<<endl;
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
//	const int& c = 12;//这是正确的写法，语法支持
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
//int Add(int x, int y, int z=10, int =10, int b=0, int c=0);//错误写法
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

//struct students//一个类的完整形式：
//{//////////////1、设置权限（默认私有）://public:公共；private:私有；protected:保护
//public:
//	string name;
//
//	string sex;
//	string num;
//	int age;
//	//属性
//	void showMessage()
//	{
//		cout << "姓名:" << name << endl;
//		cout << "性别:" << sex << endl;
//		cout << "年龄:" << age << endl;
//		cout << "学号:" << num << endl;
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
	//students s1 = {};//具体到一个人
	//s1.age = 10;
	//s1.name = "小米";
	//s1.num = "110112120119";
	//s1.sex = "女";
	//s1.showMessage();
//	return 0;
////}
//class Dot
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	void setX(int x)//设置横坐标
//	{
//		m_x = x;
//	}
//	void setY(int y)//设置纵坐标
//	{
//		m_y = y;
//	}
//
//	int getX()//获取横坐标
//	{
//		return m_x;
//	}
//	int getY()//获取纵坐标
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
//	void setDot(Dot p)//设置圆心
//	{
//		mid = p;
//	}
//	void setR(int r)//设置半径
//	{
//		m_R = r;
//	}
//	int getR()//获取半径
//	{
//		return m_R;
//	}
//	Dot getDot()//获取圆心
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
//		cout << "在圆上" << endl;
//	else if (distance > RR)
//	{
//		cout << "在圆外" << endl;
//	}
//	else
//		cout << "在圆内" << endl;
////}
//int main()
//{
//	Circle c1 = {};
//	Dot a = {};
//	a.setX(0);
//	a.setY(0);
//	c1.setDot(a);//设置圆心
//	//c1.setDot(10,0);
//	c1.setR(10);//设置半径
//	Dot p = {};
//	p.setX(10);
//	p.setY(0);//设置点
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
//	void setm_L(int l)//设置长
//	{
//		m_L = l;
//	}
//	void setm_W(int w)//设置宽
//	{
//		m_W = w;
//	}
//	void setm_H(int h)//设置高
//	{
//		m_H = h;
//	}
//	int getm_L()//获取长
//	{
//		return m_L;
//	}
//	int getm_W()//获取宽
//	{
//		return m_W;
//	}
//	int getm_H()//获取高
//	{
//		return m_H;
//	}
//	int CalculateS()//计算表面积
//	{
//		return (m_L * m_H + m_L * m_W + m_H * m_W) * 2;
//	}
//	int CalculateV()//计算体积
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
//bool is_g_Same(cuboid& c1, cuboid& c2)//成员函数判断两个长方体是否一样
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
//	cout << "c1的S：" << c1.CalculateS() <<"\nc1的V：" << c1.CalculateV() << endl;
//	cuboid c2 = {};
//	c2.setm_H(10);
//	c2.setm_L(10);
//	c2.setm_W(10);
//	cout << "c2的S：" << c2.CalculateS() << "\nc2的V：" << c2.CalculateV() << endl;
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
//	string Name;//可读可写
//	string Sex;//可写
//	int Age;//可读；
//public :
//	void setName(string name)//可写
//	{
//		Name = name;
//	}
//	string getName()//可读
//	{
//		return Name;
//	}
//	void setSex(string sex)//可写
//	{
//		Sex = sex;
//	}
//	int getAge()//可读
//	{
//		if (Age < 0 || Age>120)
//		{	
//			Age = 0;
//			cout << "你怕是个妖怪" << endl;
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
//	//p1.Name = "张三";
//	p1.setName("王五");
//	cout << p1.getName() << endl;
//	p1.setSex("男");
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
//	void setX(int x)//设置横坐标
//	{
//		m_x = x;
//	}
//	void setY(int y)//设置纵坐标
//	{
//		m_y = y;
//	}
//
//	int getX()//获取横坐标
//	{
//		return m_x;
//	}
//	int getY()//获取纵坐标
//	{
//		return m_y;
//	}
//};
//void Dot::setX(int x)//设置横坐标
//{
//m_x = x;
//}
void Dot::setX(int x)//设置横坐标
{
	m_x = x;
}
void Dot::setY(int y)//设置纵坐标
{
	m_y = y;
}

int Dot::getX()//获取横坐标
{
	return m_x;
}
int Dot::getY()//获取纵坐标
{
	return m_y;
}
void Circle:: setDot(Dot p)//设置圆心
{
	mid = p;
}
void Circle::setR(int r)//设置半径
{
	m_R = r;
}
int Circle::getR()//获取半径
{
	return m_R;
}
Dot Circle::getDot()//获取圆心
{
	return mid;
}
Circle::Circle()//对象一创建就会自动调用
{
	//Circle::mid;
	cout << "构造函数调用" << endl;
}
Circle::~Circle()//对象一销毁就会自动调用
{
	cout << "析构函数的调用" << endl;
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