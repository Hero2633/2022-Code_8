#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//
//
//	///*while (1)
//	//{
//	//	char* p = (char*)malloc(10240);
//	//}*/
//	//int* p = (int*)malloc(12);//��ǰ����12���ֽڱ�����������ٵĴ�С��
//	//for (int i = 0; i < 10; i++)
//	//{
//
//	//	p[i] = i;
//
//	//}
//	//
//	//
//	//free(p);//�ͷſռ����ԭ�ռ���������ݻᱻ���ǣ�
//
//	return 0;
//}
//int is_2_mi(int m)//m&(m-1)�������ж�m��1�ĸ������ǲ���2���ݴη���
//{
//	return !(m & (m - 1));
//}
//int main()
//{
//	system("title ����");
//	int n = 0;
//	scanf("%d",&n);
//	if (is_2_mi(n))
//		printf("��2�ı���\n");
//	else
//		printf("����2�ı���\n");
//
//	return 0;
//}
//#include<stdio.h>
//int is_run(int t)
//{
//	return ((t % 4 == 0 && t % 100) || (t % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (EOF != scanf("%d%d", &year, &month))
//	{
//		int day = 0;
//		switch (month)
//		{
//		case 12:day = 31; break;
//		case 11:day = 30; break;
//		case 10:day = 31; break;
//		case 9:day = 30; break;
//		case 8:day = 31; break;
//		case 7:day = 31; break;
//		case 6:day = 30; break;
//		case 5:day = 31; break;
//		case 4:day = 30; break;
//		case 3:day = 31; break;
//		case 2:
//		{if (is_run(year))
//		{
//			day = 29;
//		}
//		else
//			day = 28;
//
//		}break;
//		case 1:day = 31; break;
//
//		}
//		printf("%d\n", day);
//	}
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//    char c = 0;
//    char ch = 0;
//    while (EOF != scanf("%c%c", &ch, &c))
//    {
//
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//    }
//    return 0;
//}
//#include<stdio.h>
//char min_char(char ch)
//{
//    return ch + 32;
//
//}
//
//char max_char(char ch)
//{
//    return ch - 32;
//}
//
//
//int main()
//{
//    char ch = 0;
//    while (EOF != scanf("%c", &ch))
//    {
//        getchar();
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", max_char(ch));
//        else if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", min_char(ch));
//
//    }
//
//    return 0;
//}#include<stdio.h>
//char min_char(char ch)
//{
//    return ch + 32;
//
//}
//
//char max_char(char ch)
//{
//    return ch - 32;
//}
//
//
//int main()
//{
//    char ch = 0;
//    while (EOF != scanf("%c", &ch))
//    {
//        getchar();
//        if (ch >= 'a' && ch <= 'z')
//            printf("%c\n", max_char(ch));
//        else if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", min_char(ch));
//
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    float price = 0.0;
//    int m = 0;
//    int d = 0;
//    int flag = 0;
//    if (scanf("%f%d%d%d", &price, &m, &d, &flag) == 4)
//    {
//        if (m == 11 && d == 11)
//        {
//            price *= 0.7;
//            if (flag == 1)
//                price -= 50;
//        }
//        else if (m == 12 && d == 12)
//        {
//            price *= 0.8;
//            if (flag == 1)
//                price -= 50;
//        }
//        if (price < 0.0)
//            price = 0.0;
//        printf("%.2f\n", price);
//    }
//    return 0;
//}