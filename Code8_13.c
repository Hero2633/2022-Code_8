#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
typedef int TYPE;
//int main()
//{
//	printf("%zu\n", sizeof(-9223372036854775807));;
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
#include<math.h>
//#include<float.h>
//int cmp_char(const char*left,const char*right)
//{
//	return *(char*)left - *(char*)right;
//}
//void print(TYPE *a,int len)
//{
//	for (int i=0;i<len;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	putchar('\n');
//}
//int main()
//{
//	char arr[] = {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};
//	int len = strlen(arr);
//	int(*cmp)(const char*, const char*) = &cmp_char;
//	qsort(arr,len,sizeof(char),cmp);
//	print(arr,len);
//	return 0;
////}
//int cmp_int(const void* left, const void* right)
//{
//	return *(int*)left - *(int*)right;
//}
//int main()
//{
//	int arr[] = {2,1,6,3,4,5,9,0,7,8,-1};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int (*cmp)(const void*, const void*) = cmp_int;
//	qsort(arr,len,sizeof(arr[0]),cmp);
//	print(arr,len);
//	return 0;
//}
//int cmp_float(const void* left, const void* right)
//{
//	if (fabs(*(float*)left - *(float*)right) < DBL_EPSILON)
//		return 0;
//	else if (*(float*)left - *(float*)right > 0)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	float arr[] = {1.2f,3.2f,-1.2f,9.0f,5.3f,2.4f,3.1415f,13.14f,2.41f,2.411f};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int (*cmp)(const void*, const void*) = cmp_float;
//	qsort(arr,len,sizeof(float),cmp);
//	print(arr,len);
//	return 0;
//}
//
//void My_qsort(void*arr,size_t len,size_t width,int(*cmp)(const void*,const void*))
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			char* left = (char*)arr + j * width;
//			char* right = (char*)arr + (j + 1) * width;
//			if (cmp(left,right) > 0)
//			{
//				for (int k = 0; k < width; k++)
//				{
//					char tmp = left[k];
//					left[k] = right[k];
//					right[k] = tmp;
//				}
//			}
//
//		}
//
//	}
//}
//My_qsort2(void* arr, size_t len, size_t width, int(*cmp)(const void*, const void*))//插入排序实现；
//{
//	char key[100] = { 0 };
//	for (int i = 0; i < len - 1; i++)
//	{
//		int right = i;//记录区间
//		char* end = (char*)arr + (right+1)* width;//记录right+1位置的值
//		for (int j = 0; j < width; j++)//保存起来
//		{
//			key[j] = end[j];
//		}
//		char* begin = NULL;//当前位置
//		end;//空位
//		while (right>=0)
//		{
//			 begin = (char*)arr + right * width;
//			 end = (char*)arr + (right + 1) * width;
//			if (cmp(begin,key) > 0)
//			{
//				for (int k = 0; k < width; k++)
//				{
//					end[k] = begin[k];
//				}
//				right--;
//			}
//			else
//				break;
//		}
//		end = (char*)arr + (right + 1) * width;
//		for (int t = 0; t < width; t++)
//		{
//			end[t] = key[t];
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int(*cmp)(const void*, const void*) = cmp_int;
//	My_qsort2(arr,len,sizeof(arr[0]),cmp);
//	print(arr,len);
//	return 0;
//}
//typedef struct student
//{
//	char name[20];
//	char sex[10];
//	char ID[20];
//	int age;
//
//}ST;
//void printfArr(ST*p,int len)
//{
//	for (int i=0;i<len;i++)
//	{
//		printf("%s\n",(p+i)->name);
//	}
//}
//int cmp_name(const void* left, const void* right)
//{
//	return (((ST*)left)->age, ((ST*)right)->age);
//}
//int cmp_age(const void* left, const void* right)
//{
//	return ((ST*)left)->age - ((ST*)right)->age;
//}
//int main()
//{
//	ST arr[] = { {"mahuateng","man","12107980831",46},
//				{"leijun","man","12107930841",45},
//				{"lihongyan","man","1210794250831",21},
//				{"dongmingzhu","woman","321079320831",36},
//				{"zero","man","1124832752",19} };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int (*cmp)(const void*, const void*) = cmp_age;
//	qsort(arr, len, sizeof(ST), cmp);
//	return 0;
//}
//


//void menu()
//{
//	printf("****************************\n");
//	printf("*****1.Add     2.Sub   *****\n");
//	printf("*****3.Mul     4.Div   *****\n");
//	printf("*****     0.Exit       *****\n");
//	printf("****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入两个数:");
//		scanf("%d",&input);
//		int(*(p[5]))(int, int) = {0,Add,Sub,Mul,Div};
//		int len = sizeof(p)/sizeof(p[0]);
//		if (!input)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= len - 1)
//		{
//			printf("请输入两个操作数:>");
//				int x = 0;
//			int y = 0;
//			scanf("%d%d",&x,&y);
//			int ret=p[input](x,y);
//			printf(">:%d\n",ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	
//	do {
//		menu();
//		printf("请输入你的选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			int x = 0; int y = 0; int ret = 0;
//		case 1:
//			printf("请输入两个操作数:");
//			scanf("%d%d",&x,&y);
//			ret=Add(x, y);
//			printf("%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret=Sub(x, y); 
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret=Mul(x, y); 
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			ret=Div(x, y); 
//			printf("%d\n", ret);
//			break;
//		case 0:printf("退出计算器\n");
//			break;
//		default:printf("选择错误\n");
//		}
//	
//	} while (input);
//	return 0;
//}
//void fun(int n)//回调函数实现递归
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//		return;
//	}
//	void(*p)(int) = &fun;
//	p(n/10);
//	printf("%d ",n%10);
//}
//int main()
//{
//	fun(123);
//	return 0;
//}
//void Bubble_Sort(int*a,int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j+1];
//				a[j + 1] = a[j];
//				a[j] = tmp;
//			}
//		}
//	}
//}



//int cmp_int(const void* left, const void* right)
//{
//	return *(int*)left - *(int*)right;//由于我们这个函数是我们设计的，我们肯定知道我们要排的数组是什么类型的元素啊，于是我们直接强转成对应元素指针就行了
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int (*cmp)(const void*, const void*) = &cmp_int;
//	qsort(arr,len,sizeof(int),cmp);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}