#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
int fun(int n)
{
	int prod = 1, i = 0;
	for (i = 1; i <= n; i++)
	{
		prod *= i;
	} 
		return prod;
}
//struct p
//{
//	short a;
//	short b;
//};
//int main()
//{
//	cout << sizeof(struct p) << endl;
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int arr[n];
//    int x = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//        x ^= arr[i];
//    }
//    cout << x << endl;
//
//    return 0;
//}
//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int mid = 0;
//    int l = mid - 1;
//    int r = mid + 1;
//    if (numsLen == 1)
//        return mid;
//    while (mid < numsLen)
//    {
//        if (l == -1)
//        {
//            if (nums[mid] > nums[r])
//                return mid;
//        }
//        else if (r == numsLen)
//        {
//            if (nums[mid] > nums[l])
//                return mid;
//        }
//        else
//        {
//            if (nums[mid] > nums[r] && nums[mid] > nums[l])
//                return mid;
//        }
//        mid++;
//        l++;
//        r++;
//    }
//    return -1;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    int t = 0;
//    int count = 0;
//    int sum = 0;
//    for (int y = k + 1; y <= n; y++)
//    {
//        count = 0;
//        if (!k)
//        {
//            count = y;
//        }
//        else
//        {
//            count = y - k;
//        }
//        t = n / y;
//        count = count * t;
//        if (n % y < k)
//        {
//            count = count + 0;
//        }
//        else
//        {
//            count = count + n % y - k + 1;
//        }
//        sum += count;
//    }
//    printf("%d\n", sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    long long k = 0;
//    scanf("%lld%lld", &n, &k);
//    long long t = 0;
//    long long count = 0;
//    long long sum = 0;
//    for (long long y = k + 1; y <= n; y++)
//    {
//        count = 0;
//        if (!k)
//        {
//            sum = n * n;
//            goto eg;
//        }
//        else
//        {
//            count = y - k;
//        }
//        t = n / y;
//        count = count * t;
//        if (n % y < k)
//        {
//            count = count + 0;
//        }
//        else
//        {
//            count = count + n % y - k + 1;
//        }
//        sum += count;
//    }
//eg:
//    printf("%lld\n", sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    char ch[1001];
//    int k = 0;
//    gets(ch);
//    scanf("%d", &k);
//    for (int i = 0; i < k; i++)
//        printf("%c", ch[i]);
//    return 0;
//}