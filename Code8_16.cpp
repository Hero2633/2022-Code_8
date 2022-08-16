#define  _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int a = 0;
//	string b = "*********************************I love China!";
//	//cin >> a;
//	//cout << "b=" << b << endl;
//	/*cout << sizeof(b) << endl;
//	char arr[] = "I love China!";
//	cout << sizeof(arr) << endl;*/
//	//system("pause");
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	for (int i = 0; i < 10; i++)
//		cout << i << " ";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string.h>
//#include<stdlib.h>
//#include<assert.h>
//typedef struct person
//{
//	string name;
//	string sex;
//	string addres;
//	string num;
//	int age;
//}ps;
//typedef struct mark
//{
//	ps* List;
//	int size;
//	int capacity;
//}pm;
//void showMenu()
//{
//	cout << "********************" << endl;
//	cout << "****1.增加联系人****" << endl;
//	cout << "****1.显示联系人****" << endl;
//	cout << "****1.删除联系人****" << endl;
//	cout << "****1.查找联系人****" << endl;
//	cout << "****1.修改联系人****" << endl;
//	cout << "****1.清空联系人****" << endl;
//	cout << "****1.退出通讯录****" << endl;
//	cout << "********************" << endl;
//}
//void check_capacity(pm*p)
//{
//	if (p->capacity == p->size && p->capacity == 0)
//	{
//		p->capacity = 2;
//		p->List=(ps*)malloc(sizeof(ps)*(p->capacity));
//		if (p->List == NULL)
//			exit(1);
//	}
//	else if (p->capacity == p->size)
//	{
//		p->capacity = 2 * p->capacity;
//		ps*tmp=(ps*)realloc(p->List,(p->capacity)*sizeof(ps));
//		if (tmp == NULL)
//			return;
//	}
//}
//void initList(pm*p)
//{
//	p->capacity = 0;
//	p->size = 0;
//	p->List = NULL;
//
//}
//void addPerson(pm*p)
//{
//	assert(p);
//	check_capacity(p);
//	/*cout << "请输入名字:";
//	cin >> (p->List)[p->size].name;
//	cout << "请输入性别:";
//	cin >> (p->List)[p->size].sex;
//	cout << "请输入年龄:";
//	cin >> (p->List)[p->size].age;
//	cout << "请输入电话:";
//	cin >> (p->List)[p->size].num;
//	cout << "请输入住址:";
//	cin >> (p->List)[p->size].addres;*/
//	string name;
//	string sex;
//	string num;
//	string addres;
//	int age;
//	cout << "请输入名字:";
//	cin >> name;
//	cout << "请输入性别:";
//	cin >> sex;
//	cout << "请输入年龄:";
//	cin >> age;
//	cout << "请输入电话:";
//	cin >>num;
//	cout << "请输入住址:";
//	cin >>addres;
//	(p->List)[p->size].name = name;
//	(p->List)[p->size].sex = sex;
//	(p->List)[p->size].age = age;
//	(p->List)[p->size].addres = addres;
//	(p->List)[p->size].num = num;
//	p->size++;
//}
//void test()
//{
//	pm tmp;
//	initList(&tmp);
//	addPerson(&tmp);
//}
//int main()
//{
//	test();
//
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[] = {"12345"};
//	int a = 1234;
//	printf("%d\n",atoi(arr));
//	printf("%.2d ", a);
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
//shu 
//int main()
//{
//   int n;
//    scanf("%d", &n);
//    char ch[100]="0";
//    switch (n)
//    {
//    case 1:
//        strcpy(ch,"Monday");
//        break;
//    case 2:
//        strcpy(ch, "Tuesday");
//        break;
//    case 3:
//        strcpy(ch, "Wednesay");
//        break;
//    case 4:
//        strcpy(ch, "Thursday");
//        break;
//    case 5:
//        strcpy(ch, "Friday");
//        break;
//    case 6:
//        strcpy(ch, "Saturday");
//        break;
//    case 7:
//        strcpy(ch, "Sunday");
//        break;
//    default:
//        strcpy(ch, "error!");
//        break;
//    }
//    printf("%s", ch);
//
//    return 0;
//}
////int main()
////{
////
////	char a = 0;
////	a = 'b';
////	printf("%d",a);
////
////	return 0;
////}


//	int main()
//    {
//        int i = 0;
//   int n;
//    scanf("%d", &n);
//    char ch[8][20] = { "Monday","Tuesday","Wednesay","Tursday","Friday","Saturday","Sunday","error!"};
//    switch (n)
//    {
//    case 1:
//        i = 0;
//        break;
//    case 2:
//        i = 1;
//        break;
//    case 3:
//        i = 2;
//        break;
//    case 4:
//        i = 3; break;
//    case 5:
//        i = 4;
//        break;
//    case 6:
//        i = 5;
//        break;
//    case 7:
//        i = 6;
//        break;
//    default:
//        i = 7;
//        break;
//    }
//    printf("%s", ch[i]);
//
//    return 0;
//}
//

//int main()
//{
//	/*char ch[20] = {6};
//	ch [10] = "abcd";
//	printf("%s",&ch[5]);
//	return  0;*/
//	char ch[20] = "1";
//	memset(ch,'a', 6);
//	printf("%d ",(int )ch);
//
//}
//void str(char s[])
//{
//}
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int n, m;
	/*int k = 0, p = 0;
	int arr[99] = { 0 };
	for (int i = 0; i < m * n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (  k= 0; k < n * m - 1; k++)
	{
		for ( p = 0; p < n * m - 1; p++)
		{
			if (arr[p] > arr[p + 1])
			{
				int k = arr[p + 1];
				arr[p + 1] = arr[p];
				arr[p] = k;

			}
		}
	}
	for (int j = 1; j <= n * m; j++)
	{
		printf("%d ",arr[j-1]);
		if (j % m == 0)
		{
			putchar('\n');
		}
	}
	return 0;
}*/





/* int cmp(const void* left, const void* right)
   {
   int* l = (int*)left;
   int* r = (int*)right;
   return *l - *r;

	}
   int main()
   {
	   int n, m;
   scanf("%d%d", &n, &m);
   int k = 0, p = 0;
   int arr[99] = { 0 };
   for (int i = 0; i < m * n; i++)
   {
	   scanf("%d", &arr[i]);
   }
   qsort(arr,m*n,sizeof(arr[0]),&cmp);
   for (int j = 1; j <= n * m; j++)
   {
	   printf("%d ", arr[j - 1]);
	   if (j % m == 0)
	   {
		   putchar('\n');
	   }
   }
   return 0;
}*/