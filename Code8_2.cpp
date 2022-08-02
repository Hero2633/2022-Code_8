#define  _CRT_SECURE_NO_WARNINGS 0
#include<graphics.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
//int main(void)
//{
//	initgraph(640,460);
//	IMAGE img[12];
//	char file[20] = { 0 };
//	for (int i = 0; i < 12; i++)
//	{
//		sprintf(file, "%d.jpg", i);
//		loadimage(img+i, file, 50, 50);
//	}
//	//int a[9][9];
//	for (int i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 9; j++)
//		{
//			putimage(j * 50, i*50, img+9);
//		}
//		//outtextxy(i * 50, j * 50, "\n");
//	}
//	putimage(0,0,&img[0]);
//	/*putimage(50, 0, &img);
//	putimage(100, 0, &img);
//	putimage(150, 0, &img);
//	putimage(200, 0, &img);
//	putimage(250, 0, &img);
//	putimage(300, 0, &img);
//	putimage(350, 0, &img);
//	putimage(400, 0, &img);
//	putimage(450, 0, &img);
//
//	putimage(50, 0, &img);
//	putimage(50, 0, &img);
//	putimage(50, 0, &img);
//	putimage(50, 0, &img);
//	putimage(50, 0, &img);
//	putimage(50, 0, &img);*/
//
//	//mciSendString("open BGM.mp3",NULL,0,NULL);
//	//mciSendString("play BGM.mp3", NULL, 0, NULL);
//	system("pause");
//	closegraph();
//
//	return 0;
//}
//void show_arr(int *a,int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ",*(a+i));
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	show_arr(arr,len);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void rever_string(char* p, int len)
//{
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = *(p + right);
//        *(p + right) = *(p + left);
//        *(p + left) = tmp;
//        left++;
//        right--;
//    }
//    printf("%s\n", p);
//}
//int main()
//{
//    char arr[100];
//    gets(arr);
//    int len = strlen(arr);
//    rever_string(arr, len);
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = n - i; j > 0; j--)
//		{
//			printf("  ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("* ");
//		}
//		putchar('\n');
//	}
//	for (int i = n - 1; i > 0; i--)
//	{
//		for (int j = n - i; j > 0; j--)
//		{
//			printf("  ");
//		}
//		for (int k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("* ");
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<math.h>
//int is_water_flower(int i)
//{
//	int count = 0;
//	int tmp = i;
//	while (tmp)
//	{
//		tmp /= 10;
//		count++;
//	}
//	tmp = i;
//	double ret = 0.0;
//	while (tmp)
//	{
//		ret = ret + pow(tmp%10,count);
//		tmp /= 10;
//	}
//	if (i == (int)ret)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	for (i = 10; i <= 100000; i++)
//	{
//		if (is_water_flower(i))
//		{
//			printf("%d ",i);
//		}
//
//	}
//	return 0;
//}
//int SUM(int n,int a)
//{
//	int sum = 0;
//	int sum1 = 0;
//	while (a)
//	{
//		sum = sum * 10 + n;
//		sum1 = sum + sum1;
//		a--;
//	}
//	return sum1;
//}
//int main()
//{
//	int n = 0; int a = 0;
//	scanf("%d%d",&n,&a);
//	int sum = 0;
//	sum=SUM(n,a);
//	printf("%d\n",sum);
//	return 0;
//}