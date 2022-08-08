#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	//char c2[] = { '\x10', '\xa', '\0' };
//	int c = 0;
//	char ch[10] = "";
//	scanf("%d%s",&c,ch);
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
int* Arr_(int max)
{
    return (int*)malloc(sizeof(int) * max);
}
int* printNumbers(int n, int* returnSize) {
    // write code here
    int max = (int)pow(10, n);
    int* arr = Arr_(max);
    for (int i = 1; i < max; i++)
    {
        arr[i - 1] = i;
        (*returnSize)++;
    }
    return arr;
}
//int main()
//{
//
//    printNumbers();
//    return 0;
//}
//#include<stdio.h>
//int is_lepar(int y)
//{
//    return ((y % 4 == 0) && (y % 100)) || (y % 400 == 0);
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    int months[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    scanf("%d%d%d", &year, &month, &day);
//    int sum = 0;
//    for (int i = month - 1; i >= 0; i--)
//        sum += months[i];
//    if (is_lepar(year) && month > 2)
//    {
//        printf("%d\n", sum + day + 1);
//    }
//    else
//    {
//        printf("%d\n", sum + day);
//    }
//    return 0;
//}
//int main()
//{
//    char cj[222] = " \"\" ";
//    printf("%d",strlen(cj));
//
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//
//    long long m = 0;
//    scanf("%lld", &m);
//    long long n = m * (m - 1) / 2;
//    long long j = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        j += 2;
//    }
//    while (m - 1)
//    {
//        printf("%lld+", j);
//        j += 2;
//        m--;
//    }
//    printf("%lld\n", j);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long m = (3 * n * n + n) / 2;
//    printf("%lld\n", m);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a[2000];
//    int n = 0;
//    scanf("%d", &n);
//    float vla = 0.0f;
//    int count = 0;
//    int s = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", a + i);
//        if (a[i] > 0)
//        {
//            vla = vla + a[i];
//            s++;
//        }
//        else if (a[i] < 0)
//            count++;
//    }
//    if (!s)
//        s = 1;
//    printf("%d %.1f\n", count, vla / s);
//    return 0;
//}
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//
//
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//    if (!head)
//        return head;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    struct ListNode p;
//    struct ListNode* dummyhead = &p;
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;;
//    while (n > 0)
//    {
//        fast = fast->next;
//        n--;
//    }
//    while (fast != NULL)
//    {
//        prev = slow;
//        slow = slow->next;
//        fast = fast->next;
//
//    }
//    prev->next = slow->next;
//    return dummyhead->next;
//}