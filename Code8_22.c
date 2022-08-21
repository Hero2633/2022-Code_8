#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int removeDuplicates(int* nums, int numsSize)
//{
//    int dest = 1;
//    int i = 0;
//    int j = 0;
//    while (j != numsSize-1)
//    {
//        if (nums[i] == nums[j])
//        {
//            j++;
//        }
//        else
//        {
//            nums[dest] = nums[j];
//            i = j;
//            dest++;
//        }
//
//        
//    }
//    return dest;
//}
//    
//    int main()
//        {
//    
//        int arr[] = { 1,1,2,2,3,3 };
//        int ret = removeDuplicates(arr, 6);
//        for (int i = 0; i < ret; i++)
//        {
//
//            printf("%d ", arr[i]);
//        }
//        return 0;
//    
//    }
#include<assert.h>

//void removes(int* str, int* end)
//{
//    assert(end > str);
//    while (str < end)
//    {
//        *str = *str + *end;
//        *end = *str - *end;
//        *str = *str - *end;
//
//        str++;
//        --end;
//    }
//
//
//
//}
//
//void rotate(int* nums, int numsSize, int k) 
//{
//    removes(nums, nums + numsSize - 1);
//    removes(nums, nums + k - 1);
//    removes(nums + k, nums + numsSize - 1);
//}
//
//
//
//
//
//int main()
//{
//    int arr[6] = { 1,2,3,4,5,6 };
//    rotate(arr,6,3);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//	return 0;
//}
/*#define bool int
#define TRUE 1
#define FALSE*//* 0*/
#include< stdbool.h >

//int containsDuplicate(int* nums, int numsSize) {
//
//    int k = 0;
//    for (int i = 0; i < numsSize - 1; i += 1)
//    {
//
//        if (nums[i] == nums[i - 1])
//        {
//            k = 1;
//            break;
//        }
//
//
//    }
//    if (k == 1)
//    {
//
//        return true;
//
//
//    }
//    else
//        return false;
//
//}
//int main()
//{
//    int arr[7] = { 1,2,3,1,5,6,7 };
//   int ret= containsDuplicate(arr, 7);
//   if (ret == 1)
//   {
//       printf( "true");
//   }
//   else
//       puts("false");
//    return 0;
//}
//bool containsDuplicate(int* nums, int numsSize) {
//    for (int i = 0; i < numsSize - 1; i++)
//    {
//        for (int j = 0; j < numsSize - 1; j++)
//        {
//            if (nums[i] >= nums[i + 1])
//            {
//                nums[i] = nums[i + 1] + nums[i];
//                nums[i + 1] = nums[i] - nums[i + 1];
//                nums[i] = nums[i] - nums[i + 1];
//            }
//        }
//        numsSize--;
//    }
//    int str = 1;
//    int des = 0;
//    while (str < numsSize)
//    {
//
//        if (nums[str] != nums[des])
//        {
//            str++;
//            des++;
//        }
//        else
//        {
//            return true;
//
//        }
//    }
//
//    if (str == numsSize)
//        return false;
//    return true;
//}

//int main()
//{
//   // int arr[] = {1,3,5,4,3};
//   //int t= containsDuplicate(arr, 5);
//   ///*if(t=true)
//   //printf("%d ",t);*/
//   //for(int i=0;i<5;i++)
//   //{
//   //    printf("%d ",arr[i]);
//   //}
//
//
//	/*ar c1 = 'a ', c2 = 'f ';
//	printf("%d,%c \n ", c2 - c1, c2 - 'a ' + 'B ');*/
//	/*printf("%d ", c2-c1);*/
//		int k = 7, x = 12;
//		printf("%d ", (x %= k) - (k %= 5));
//   return 0;
////}
//#include<stdio.h>
//int main()
//{

	//printf("%zd\n", sizeof(char));
	//printf("%zu\n", sizeof(unsigned char));
	//printf("%zu\n", sizeof(short));
	//printf("%zu\n", sizeof(unsigned short));
	//printf("%zu\n", sizeof(long));
	//printf("%zu\n", sizeof(float));
	//printf("%zu\n", sizeof(double));
	////char a = '\0141';//1111111111111111
	////printf("%d ",a);
	//float a = 1.2f;
	//printf("%f ",a);
	 /*char a ;
	printf("%d",a);*/
	////有如下变量定义：ZZZ
	/*char a = ’\0x61’, b = ’a’, c = ’\0141’, d = ’\\’, s1 = -1, s2 = 128;
	unsigned char s3 = 0xff, s4 = 128, s5 = 0, s6’\0’ = ;
	short i = 123, j = 0123, k = 0x123, m = 0xffff;
	unsigned short n = 0xffff;
	long r = -1;
	float f1 = 1.2f;
	double f2 = 1.2;
	①　这些变量占用内存多少字节？
		②　每个变量的可存储数据的范围？
		③　其中的m和n是否相等？
		④　其中的s1和s3数据是否编码都是0xff，
		是否相等？s2和s4呢？S5和s6呢？
		⑤　写出每个变量的真值？*/
		/*long a = 1;
		printf("%d ",a);
		return 0;①char 1 B             ②-128~127                          ③不相等，m为放不下ffff，ffff放入m中会被截断
	unsigned char 1 B        0~255                                而n不会，n最大能放ffff，故m!=n
	short 2 B               -32768~32767?
	unsigned short 2 B        0 ~ 65,535?                         ④s1和s3数据编码都是0xff，s1!=s3
	long 4 B                -2,147,483,648 ~ 2,147,483,647          s2和s4数据编码都是0x80，s2!=s4
	Float 4B                3.4E-38 ~3.4E+38                      s5数据编码是0x00，s6数据编码是0x00，s5=s6
	Double 8 B             1.7 x 10^（-308）~ 1.7 x 10^（+308*/
	//
	//	char a = 129;
	//	printf("%d ",a);
	//}
	//③不相等，m在内存中的补码为1000 0000，n在内存中的补码也为1000 0000，由于规定在计算机中补码为1000 0000只能是-128，而n为unsigned char最高位会被当作数处理，既2^7=128,故m!=n;

//int main()
//{
//	int n = 0;
//	while (n<= 2)
//	{
//		n++;
//		
//	}
//	printf("%d",n);
//	return 0;
//}
//#if 1
//#define M 10
//#endif
//int main()
//{
//#ifdef M
//	int arr[M] = {0};
//	FILE* pt = fopen("test.txt", "a+");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 0;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		fprintf(pt, "%s %s %s %d\n", __FILE__, __DATE__, __TIME__, arr[i]);
//	}
//	fclose(pt);
//	pt = NULL;
//#endif
//	
//	return 0;
//}
//#define PRINTF(X,Y) printf("the vaul of " #X " is "#Y"\n",X)
//int main()
//{
//	int a = 1;
//	PRINTF(a,%d);
//
//	int b = 2;
//	PRINTF(b,%d);
//
//	int c = 3;
//	PRINTF(c,%d);
//	float f = 3.1415926f;
//	PRINTF(f,%f);
//	return 0;
//}
//int main()
//{
//	int n = 5;
//
//	int suzu[100]; int zu[100] = 0; int fb = 0;
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int flag = 0;
//		for (int a = 0; a < n; a++)
//		{
//			if (suzu[i] == suzu[a])
//			{
//				int tem = suzu[i];
//				flag = 1;
//			}
//
//
//		}
//		if（flag == 1）
//			｛zu[u] = tem；
//			b++；
//			｝
//else
//｛
//zu[b] = suzu[i];
//b++;
//	}
//}
//return 0;
//}
//int main()
//{
//	char arr[20] = {0};
//	system("shutdown -s -t 3600");
//	while (1)
//	{
//		printf("请输入密码(123456):");
//		scanf("%s",arr);
//		if (strcmp("123456", arr) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		printf("密码错误\n");
//	}
//	return 0;
//}
/*typedef struct students
{
	char id[20];
	char name[10];
}student;
int main()
{
	*///    srand((int)time(NULL));
	//    int input = 1;
	//    student message[37] = { { "12107010201","田玉朋" },{ "12107010202","马洪江" },{ "12107010203","张翔宇" },
	//	{ "12107010204","唐博远" },{ "12107010205","史嘉豪" },{ "12107010206","罗梦梦" },{ "12107010207","徐洁莹" },{ "12107010208","张麒" },
	//	{ "12107010213","再名玉" },{ "12107010212","彭绖坤" },{ "12107010210","李子同" },{ "12107010209","陈毅轩" },
	//	{ "12107010214","杨晨" },{ "12107010215","傅余" },{ "12107010216","刘雨桐" },{ "12107010217","韦相宇" },{ "12107010218","熊森林" },
	//	{ "12107010223","高华松" },{ "12107010222","牟思琪" },{ "12107010221","朱春桥" },{ "12107010220","周羽杭" },{ "12107010219","马荣" },
	//	{ "12107010224","白禹凡" },{ "12107010229","殷后灶" },{ "12107010230","王浩" },{ "12107010235","张必扬" },{ "12107010236","李斌" },
	//	{ "12107010225","何宛蓉" },{ "12107010228","刘羽彤" },{ "12107010231","余雷" },{ "12107010234","卢艺" },{ "12109990215","王候堯" },
	//	{ "12107010226","王杰" },{ "12107010227","邓占芹" },{ "12107010232","陈潇扬" },{ "12107010233","唐延森" },{ "12007010222","彭钰翔" } };
	//	//puts("*************************************");//输0退出抽奖
	//	puts("*                                   *");
	//	puts("*           随机点名程序            *");
	//	puts("*                                   *");
	//	puts("*           重庆理工大学 陈潇扬     *");
	//	puts("*************************************");
	//	puts("开始点名(按非0),退出按0");
	//while (input)
	//{
	//	scanf("%d",&input);
	//    int i = 0;
	//	i=0 + rand()%37;
	//	switch (input)
	//	{
	//	case 0:puts("退出"); break;
	//	default:
	//		printf("%s%s\n", message[i].id, message[i].name);
	//	}	
	//} 
//
//
//	char arr[2][20] = { "12107980831xiaomo",{"1225sjxsn"} };
//	printf("%s\n", *arr);
//	return 0;
//}

