#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
using namespace std;
#include<string>
//class students//一个类的完整形式：
//{//////////////1、设置权限（默认私有）://public:公共；private:私有；protected:保护
//public:
//	string name;
//	string sex;
//	string num;
//	int age;
//	//属性
//	void showMessage()
//	{
//		cout << "姓名:" << name<< endl;
//		cout << "性别:" << sex << endl;
//		cout << "年龄:" << age << endl;
//		cout << "学号:" << num << endl;
//	}
//};
////struct Students///////////struct和class没多大区别，我们即可用struct来表示类，也可以利用class来表示类，唯一的区别就是struct
//// ////////////////////////的默认权限是公共，而class的默认权限是私有；
////{
////public:
////	string name;
////	string sex;
////	string num;
////	int age;
////	//属性
////	void showMessage()
////	{
////		cout << "姓名:" << name << endl;
////		cout << "性别:" << sex << endl;
////		cout << "年龄:" << age << endl;
////		cout << "学号:" << num << endl;
////	}
////};
//struct Students//
//{
//public:
//	string name;
//private:
//	string sex;
//	string num;
//	int age;
//	//属性
//public:
//	void Set()
//	{
//		cout << "姓名:";
//		cin >> name;
//		cout << "学号:";
//		cin >> num;
//		cout << "性别:";
//		cin >> sex;
//		cout << "年龄:";
//		cin >> age;
//	}
//	void showMessage()
//	{
//		cout << "姓名:" << name << endl;
//		cout << "性别:" << sex << endl;
//		cout << "年龄:" << age << endl;
//		cout << "学号:" << num << endl;
//	}
//};
//int main()
//{
//	Students s1 = {};
//	//s1.age = 10;
//	s1.name = "王五";
//	//s1.num = "12344";
//	//s1.sex = "女";
//	s1.Set();
//	s1.showMessage();
//	return 0;
//}
//int main()
//{
//	students ST = {};
//	ST.name = "张三";
//	ST.age = 19;
//	ST.num = "12107980831";
//	ST.sex = "男";
//	ST.showMessage();
//	return 0;
//}
	//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int a = 10;
//	//int &b = a;//本质是int *const b=&a;
//	//a = 20;//引用必须赋初值，且初始值必须是一块合法的空间，不是具体的数！！！
//	//const int& c = a;//只有前面加上const才能直接赋常量：本质是int tmp=10;const int &c=tmp;
//	////c = 10;
//	//int* p = &a;
//	//int*& d = p;
//	//int arr[10] = { 0 };
//	//int (&e)[10] = arr;
//	//cout << e << endl;
//	//cout << arr << endl;
//	//int(*p)(int, int) = Add;
//	//const int(*(&ptmp))(int, int) = Add;
//	return 0;
//}
//void Swap1(int a,int b)//值传递
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int*a,int*b)//址传递
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void Swap3(int&a,int&b)//引用传递
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()//引用作为参数
//{
//	int a = 10;
//	int b = 20;
//	cout << "Swap1交换之前a=" <<a<<"b=" <<b<< endl;
//	Swap1(a, b);
//	cout << "Swap1交换之后a=" << a << "b=" << b <<"\n" << endl;
//
//	a = 10, b = 20;
//	cout << "Swap2交换之前a=" << a << "b=" << b << endl;
//	Swap2(&a, &b);
//	cout << "Swap2交换之后a=" << a << "b=" << b <<"\n" << endl;
//	
//	a = 10, b = 20;
//	cout << "Swap3交换之前a=" << a << "b=" << b << endl;
//	Swap3(a, b);
//	cout << "Swap3交换之后a=" << a << "b=" << b <<"\n" << endl;
//	int m = 20;
//	int& n = m;
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int& Add(int x, int y)
//{
//	static int z = x + y;
//	//cout <<"&z:" << &z << endl;
//	return z;
//}
//int main()
//{
//	/*int ret = Add(10,20);
//	int& tmp = Add(10, 20);
//	cout << tmp << endl;
//	Add(10, 20) = 100;
//	cout << tmp << endl;*/
//	//cout <<"&ret:" << &ret << endl;
//	//cout << "&tmp" << &tmp << endl;
//	///*cout << ret << endl;
//	//cout << Add(10, 20) << endl;*/
//
//	///int& a = Add(10,20);
//	//int& ret = ret;
//	//int& a = ret;
//	/*int a = 0;
//	int& ret = a;*/
//	//int ret = 19;
//
//	return 0;
//}
//int fun()
//{
//	cout << "fun()"<<endl;
//	return 1;
//}
//int fun(int a)
//{
//	cout << "fun(int a)" << endl;
//	return a;
//}
//int fun(int a,int b)
//{
//	cout << "fun(int a,int b)" << endl;
//	return b;
//}
//int fun(int a,double b)
//{
//	cout << "fun(int a,double b)" << endl;
//	return a;
//}
//int fun(double ,int a)
//{
//	cout << "fun(double b,int a)" << endl;
//	return a;
//}
//int fun(int a, int);
//int fun(int a, int)
//{
//	cout << "fun(int a,int)" << endl;
//	return a;
//}
//int fun(int a)
//{
//	cout << "fun(int a)" << endl;
//	return a;
//}
//int fun(int a, int b=10,int c=10)
//{
//	cout << "fun(int a,int b=10,int c=10)" << endl;
//	return b;
//}
//int fun(int a, int b);
//int fun(int a=10, int b=10)
//{
//	cout << "fun(int a,int b)" << endl;
//	return 1;
//}
//int main()
//{
//	fun(10,20);
//	return 0;
//}
//int main()
//{
//	fun();
//	fun(1);
//	fun(1, 1.2);
//	fun(1.1,2);
//	fun(2.1);
//	return 0;
//}
//int* test()
//{
//	//int *p=new int();
//	int* p = new int[10];
//	int* tmp = new int;
//	return p;
//
//}
//int main()
//{
//	int*tmp=test();
//	free(tmp);
//	return 0;
//}