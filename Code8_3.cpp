#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmp = n;
//	while (1!=n)
//	{
//		sum = sum + n / 2;
//		n = n / 2 + n % 2;
//	}
//	printf("%d\n",tmp+sum);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//#define begin 10000
//#define end 99999
//#define count 5
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int tmp = begin;
//
//	while (tmp <= end)
//	{
//		sum = 0;
//		for (int q = 10; q <= 10000; q *= 10)
//			sum = sum + (tmp / q) * (tmp % q);
//		if (sum == tmp)
//			printf("%d ", tmp);
//		tmp++;
//
//	}
//	return 0;
//}
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<mmsystem.h>
#include<windows.h>
#pragma comment (lib,"winmm.lib")
void BGM()
{
	mciSendString("open 120.mp3",NULL,0,NULL);//�����ڸ���������Ӹ�alias��ʾ������ȡ����������ֱ��д�ں��������
	mciSendString("play 120.mp3", NULL, 0, NULL);//�����������wait��ʾ�ȸ��������ڷ��ؼ�repeat��ʾ�ظ����ţ�
	//mciSendString("close 120.mp3", NULL, 0, NULL);

}
void change()
{
	HWND p;
	p = GetHWnd();//��ȡ���
	SetWindowText(p,"EasyX��������");//���ô��ڱ���
	MessageBox(NULL, "��ϲ���н�500W", "��ʾ", MB_OKCANCEL);//�������ڣ���ʾ�û�����
}
int main()
{
	initgraph(640,496,SHOWCONSOLE);//�滭����
	int x = 0;
	int y = 0;
	//BGM();
	
	while (1)
	{
	BeginBatchDraw();//��ʼ������ͼ//��ֹͼƬһ��һ����
	setbkcolor(WHITE);//���ñ�����ɫ
	cleardevice();//ˢ��һ�±�����ɫ��
	setbkmode(TRANSPARENT);//���ñ���ģʽΪ͸��
	setfillcolor(YELLOW);//���������ɫΪ��ɫ//�������õ��������ʽ��ͼ�Σ��˺�����������
	setlinecolor(RGB(204, 232, 207));//����������ɫ
	setlinestyle(PS_DASH,2);//����������ʽΪ����
	int x1 = 250;
	int y1 = 50;
	int x2 = 450;
	int y2 = 150;//�����εĴ�С��̬����
	fillrectangle(x1,y1,x2,y2);//�ڣ�250��50���루450��150������������
	settextcolor(RGB(125, 184, 235));//����������ɫ
	settextstyle(30,0,"����");//����������ʽ
	int hx = textwidth("Hello World!");//�����ı����
	int hy = textheight("Hello World!");//�����ı��߶�
	outtextxy((x2-x1-hx)/2+x1,(y2-y1-hy)/2+y1,"Hello World!");//�������
	IMAGE p;//����һ�����������洢ͼƬ
	loadimage(&p,"img.jpg", 250, 450);//��ͼƬ��250 x 450�Ĵ�С����p
	putimage(0,0,&p);//�ӣ�0��0��λ�ÿ�ʼ���ͼƬ��

	//MOUSEMSG msg;
	//while(1)
	//{
	//	if (MouseHit())//����������Ϣ���ǲŽ���
	//	{
	//		msg = GetMouseMsg();//��ȡ�����Ϣ
	//		if (msg.x > x1 && msg.x < x2 && msg.y >= y1 && msg.y <= y2)//�������ڻ�ɫ���λ��ߵ����ɫ���λ�����ʾ��
	//		{
	//			printf("����ڻ�ɫ����ķ�Χ��!\n");
	//		}
	//		switch (msg.uMsg)//�ַ������Ϣ��
	//		{
	//		case WM_LBUTTONDOWN:
	//			outtextxy(250, 450, "����������");
	//			printf("����������,��ǰ����(%d,%d)\n",msg.x,msg.y);//����������Ҫչʾ����̨��
	//			                                                 //������initgraph���������NULLӦ�ø�ΪSHOWCONSOLE
	//			break;
	//		case WM_RBUTTONDOWN:
	//			outtextxy(250, 450, "����Ҽ�������"); 
	//			printf("����������,��ǰ����(%d,%d)\n", msg.x, msg.y);
	//			break;
	//		}
	//	}
	//}
	//cleardevice();
	
	//while (1)
	//{
	//	cleardevice();
	/*	setfillcolor(RED);
		setlinestyle(PS_DASH);
		fillcircle(x, y, 50);*/
	//	char ch =_getch();
	//	switch (ch)
	//	{
	//	case 'W':
	//	case 'w':
	//	case 72:; y -= 5;
	//		printf("�㰴�����ϼ�\n"); break;
	//	case 'S':
	//	case 's':
	//	case 80:y += 5;
	//		printf("�㰴�����¼�\n"); break;
	//	case 'A':
	//	case'a':
	//	case 75:x -= 5;
	//		printf("�㰴�������\n"); break;
	//	case 'D':
	//	case 'd':
	//	case 77:x += 5;
	//		printf("�㰴�����Ҽ�\n"); break;
	//	}
	//}
	
		//cleardevice();
		setfillcolor(RGB(0, 122, 204));
		setlinestyle(PS_DASH);
		fillcircle(x, y, 20);
		EndBatchDraw();//����������ͼ
		if (GetAsyncKeyState(VK_UP))
			y -=  5;
		if (GetAsyncKeyState(VK_DOWN))
			y += 5;
		 if (GetAsyncKeyState(VK_LEFT))
			x -= 5;
		if (GetAsyncKeyState(VK_RIGHT))
			x += 5;
		//change();
	}
	system("pause");//��ֹ����һ��������������
	closegraph();//�رմ���
	return 0;
}