#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
//#pragma warning(disable:0433)
using namespace std;
//class Person
//{
//	friend istream& operator>>(istream& in, Person& p);
//
//	friend int main();
//private:
//	string name;
//	string bedroom;
//public:
//};
//istream& operator>>(istream& in, Person&p)
//{
//	in >> p.name>>p.bedroom;
//	return in;
//}
//int main()
//{
//	Person p1;
//	cin >> p1;
//	cout << p1.name << endl;
//	cout << p1.bedroom << endl;
//	Person p2;
//	const Person& p3 = p1;
//	const Person p4;
//	//const Person& const p5 = p4;
//	//int a = 0;
//	//const int* p = &a;
//	//const int b = 0;
//	///int* pp = &b;
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//    long long i = 0;
//    cin >> i;
//    long long star = i * (i - 1) + 1;
//    for (int j = 0; j < i - 1; j++)
//    {
//        cout << star << "+";
//        star += 2;
//    }
//    cout << star << endl;
//}
//int main()
//{
//	char arr[100] = {0};
//	int j = 0;
//	for (int i = 0; i < 10; i++, j += 2)
//		; //sprintf(arr + j, "%d+%d", i, i + 1);
//	printf("%s",arr);
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;

//int main() {
//    char arr[1024] = { 0 };
//    int m = 0;
//    cin >> m;
//    long long Start = m * (m - 1) + 1;
//    while (m--)
//    {
//        sprintf(arr, "%s+%lld", arr, Start);
//        Start += 2;
//
//    }
//    printf(arr);
//}
//int minNumberInRotateArray(int* arr, int rotateArrayLen) {
//    // write code here
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    int mid = 0;
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > arr[left])//旋的太少了
//        {
//
//            left = mid;
//
//        }
//        else if (arr[mid] < arr[left])//旋转的太多了
//        {
//
//            right = mid-1;
//        }
//        else
//        {
//            left++;
//        }
//    }
//    return arr[left];
//}
//int main()
//{
//    int arr[] = { 3,4,5,5,5,5,55,1,2 };
//    int ret=minNumberInRotateArray(arr,sizeof(arr)/sizeof(int));
//    cout << ret;
//    return 0;
//}
//class Person
//{
//private:
//	string name;
//	int age;
//public:
//	friend int main();
//	Person(int a) :age(a)
//	{
//		;
//	}
//	Person operator&(const Person &p)//临时变量具有常属性;!!!!
//	{
//		Person tmp(1);
//		tmp.age = age & p.age;
//		return tmp;
//	}
//};	
//int main()
//{
//	cout << (-10 & 2) << endl;
//	Person p1(-10);
//	Person p2(2);
//	Person p3 = p1 & p2;
//	cout <<  p3.age<< endl;
//	return 0;
//}