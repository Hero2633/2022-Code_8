#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
using namespace std;
#include<string>
//class students//һ�����������ʽ��
//{//////////////1������Ȩ�ޣ�Ĭ��˽�У�://public:������private:˽�У�protected:����
//public:
//	string name;
//	string sex;
//	string num;
//	int age;
//	//����
//	void showMessage()
//	{
//		cout << "����:" << name<< endl;
//		cout << "�Ա�:" << sex << endl;
//		cout << "����:" << age << endl;
//		cout << "ѧ��:" << num << endl;
//	}
//};
////struct Students///////////struct��classû����������Ǽ�����struct����ʾ�࣬Ҳ��������class����ʾ�࣬Ψһ���������struct
//// ////////////////////////��Ĭ��Ȩ���ǹ�������class��Ĭ��Ȩ����˽�У�
////{
////public:
////	string name;
////	string sex;
////	string num;
////	int age;
////	//����
////	void showMessage()
////	{
////		cout << "����:" << name << endl;
////		cout << "�Ա�:" << sex << endl;
////		cout << "����:" << age << endl;
////		cout << "ѧ��:" << num << endl;
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
//	//����
//public:
//	void Set()
//	{
//		cout << "����:";
//		cin >> name;
//		cout << "ѧ��:";
//		cin >> num;
//		cout << "�Ա�:";
//		cin >> sex;
//		cout << "����:";
//		cin >> age;
//	}
//	void showMessage()
//	{
//		cout << "����:" << name << endl;
//		cout << "�Ա�:" << sex << endl;
//		cout << "����:" << age << endl;
//		cout << "ѧ��:" << num << endl;
//	}
//};
//int main()
//{
//	Students s1 = {};
//	//s1.age = 10;
//	s1.name = "����";
//	//s1.num = "12344";
//	//s1.sex = "Ů";
//	s1.Set();
//	s1.showMessage();
//	return 0;
//}
//int main()
//{
//	students ST = {};
//	ST.name = "����";
//	ST.age = 19;
//	ST.num = "12107980831";
//	ST.sex = "��";
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
//	//int &b = a;//������int *const b=&a;
//	//a = 20;//���ñ��븳��ֵ���ҳ�ʼֵ������һ��Ϸ��Ŀռ䣬���Ǿ������������
//	//const int& c = a;//ֻ��ǰ�����const����ֱ�Ӹ�������������int tmp=10;const int &c=tmp;
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
//void Swap1(int a,int b)//ֵ����
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int*a,int*b)//ַ����
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void Swap3(int&a,int&b)//���ô���
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()//������Ϊ����
//{
//	int a = 10;
//	int b = 20;
//	cout << "Swap1����֮ǰa=" <<a<<"b=" <<b<< endl;
//	Swap1(a, b);
//	cout << "Swap1����֮��a=" << a << "b=" << b <<"\n" << endl;
//
//	a = 10, b = 20;
//	cout << "Swap2����֮ǰa=" << a << "b=" << b << endl;
//	Swap2(&a, &b);
//	cout << "Swap2����֮��a=" << a << "b=" << b <<"\n" << endl;
//	
//	a = 10, b = 20;
//	cout << "Swap3����֮ǰa=" << a << "b=" << b << endl;
//	Swap3(a, b);
//	cout << "Swap3����֮��a=" << a << "b=" << b <<"\n" << endl;
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