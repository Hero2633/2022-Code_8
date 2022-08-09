#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c\n",&ch);
//
//	return 0;
//}
//int main()
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n",a+b);//11111111111111111111111111110110
//	                   10000000000000000000000000001001
//	                   10000000000000000000000000001010
//	return 0;
//}
//11111111111111111111111111001000
//00000000000000000000000001100100
//00000000000000000000000000101100 
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			
//		}
//	}
//
//	return 0;
//}
// 11111111111111111111111111001000
// 00000000000000000000000001100100
//100000000000000000000000000101100
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	int e = 1;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2)+(a == 3)==1)
//							&&((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							&& ((c == 5) + (d == 3) == 1))
//							if(a*b*c*d*e==120)
//											printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[50][50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int r = 0; r < n; r++)
//	{
//		int c = 0;
//		arr[r][0] = 1;
//		printf("%-2d ",arr[r][0]);//打印第一个
//		int r_ = r - 1;//记录上一层的值
//		int c_ = 0;
//		for (c = 1; c <=r; c++)//计算当前层的值
//		{
//			arr[r][c] = arr[r_][c_] + arr[r_][c_+1];
//			c_++;
//			printf("%-2d ",arr[r][c]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}
////int main()
//{
//	char killer = 'A';
//	int count = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)//假设凶手
//	{
//		count = 0;
//	if (killer != 'A')//判断A说话真伪
//			count++;
//	if (killer == 'C')//判断B说话真伪
//		count++;
//	if (killer == 'D')//判断C说话真伪
//		count++;
//	if (killer != 'D')//判断D说话真伪
//		count++;
//	if (3 == count)//如果3个人说了真话
//		printf("%c\n", killer);
//}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;//11001000
//	unsigned char b = 100;//01100100
//	unsigned char c = 0;
//	c = a + b;//整型提升；
// //00000000000000000000000011001000
//// 00000000000000000000000001100100
//// 00000000000000000000000100101100
//	int d = a + b;
//	printf(" % d % d", d, c);
//	return 0;
//}

//
struct ListNode {
    int val;
    struct ListNode* next;
};

//void Swap(struct ListNode* prev, struct ListNode* l1, struct ListNode* l2, struct ListNode* Next)
//{
//    l2->next = l1;
//    l1->next = Next;
//    prev->next = l2;
//}
//
//struct ListNode* swapPairs(struct ListNode* head) {
//    if (!head || head->next == NULL)
//        return head;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* l1 = head;
//    struct ListNode* l2 = head->next;
//    struct ListNode* Next = l2->next;
//    while (l1 && l2)//起码得有2个节点才能交换
//    {
//        Swap(prev, l1, l2, Next);
//        prev = l1;
//        l1 = Next;
//        if (!l1 || l1->next == NULL)//没有两个节点直接退出；
//            break;
//        l2 = l1->next;
//        Next = l2->next;
//    }
//    return dummyhead->next;
//}
//#include<stdlib.h>
//void Swap(struct ListNode* prev, struct ListNode* begin, struct ListNode* end, struct ListNode* next)
//{
//
//    struct ListNode* tail = NULL;
//    struct ListNode* l1 = begin;
//    struct ListNode* l2 = l1->next;
//    while (l1 !=next)
//    {
//        l1->next = tail;
//        tail = l1;
//        l1 = l2;
//        if (l2 == NULL)
//            continue;
//        l2 = l2->next;
//    }
//    prev->next = tail;
//    begin->next = next;
//
//}
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* begin = head;
//    struct ListNode* end = head;
//    int key = k-1;
//    k--;
//    if (head == NULL)
//        return head;
//    while (k)//再k个之前检查处空指针，直接返回
//    {
//            end = end->next;
//            if (end == NULL)
//                return dummyhead->next;
//            k--;
//    }
//    struct ListNode* NEXT = end->next;
//    while (begin)
//    {
//        Swap(prev, begin, end, NEXT);
//        prev = begin;
//        begin = NEXT;
//        end = begin;
//        int tmp = key;
//        if (end == NULL)
//            return dummyhead->next;
//        while (tmp)//再k个之前检查处空指针，直接返回
//        {
//            end = end->next;
//            if (end == NULL)
//                return dummyhead->next;
//            tmp--;
//        }
//        NEXT = end->next;
//    }
//    return dummyhead->next;
//}
//int main()
//{
//    struct ListNode l1;
//    struct ListNode l2;
//    struct ListNode l3;
//    struct ListNode l4;
//    struct ListNode l5;
//    l1.val = 1;
//    l1.next = &l2;
//    l2.val = 2;
//    l2.next = &l3;
//    l3.val = 3;
//    l3.next = &l4;
//    l4.val = 5;
//    l4.next = &l5;
//    l5.val = 5;
//    l5.next = NULL;
//    struct ListNode* l=reverseKGroup(&l1, 1);
//    /*struct ListNode *l = &l1;
//    for (int i = 0; i < 5; i++)
//    {       printf("%d ", l->val);
//            l = l->next;*/
////
//    return 0;
////}
//int main()
//{
//    char a = 300;
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);//00000000000000000000000000001010
//                      //11111111111111111111111111101100
//                      //11111111111111111111111111110110
//    return 0;         //10000000000000000000000000001001
//                      //10000000000000000000000000001010
//}
//4.
//int i = -20;
//unsigned  int  j = 10;
//printf("%d\n", i + j);
////按照补码的形式进行运算，最后格式化成为有符号整数
//int main()
//{
//    int i = -20;
//    unsigned int j = 10;
//    printf("%d\n", i + j);
//    return 0;
//}
//int main()
//{
//    unsigned int i;
//
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//    }
//}
//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
#include <stdio.h>
unsigned char i = 0;
int main()
{
    for (i = 0; i <= 255; i++)
    {
        printf("hello world\n");
    }
    return 0;
}