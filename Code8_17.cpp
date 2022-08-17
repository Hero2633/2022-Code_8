#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
#include<conio.h>
#pragma warning(disable:6031)//忽略警告
#pragma warning(disable:26495)//忽略代码26495的警告
using namespace std;
#define MAX 100//设置通讯录大小
typedef struct student//通讯录结构体
{
	string name;
	string sex;
	int age;
	string num;
	string addres;
}ST;
struct mark
{
	ST students[MAX];
	int size;//记录有效数据
};//记录结构体数组
int is_exist(mark*p,string ch)//判断ch字符串是否存在
{
	for (int i = 0; i < p->size; i++)
	{
		if (p->students[i].name == ch)
			return i;
	}
	return -1;
}
void init_mark(mark*p)//初始化
{
	p->size = 0;
	for (int i = 0; i < MAX; i++)
	{
		p->students[i].name = "";
		p->students[i].num = "";
		p->students[i].addres = "";
		p->students[i].sex = "";
		p->students[i].age =0;
	}
}
void add_student(mark*p)//增加联系人
{
	if (p->size == MAX)
	{
		cout << "空间已满\n";
	}
	else
	{
		cout << "请输入姓名:";
		cin >> (p->students[p->size].name);
		cout << "请输入性别:";
		cin >> (p->students[p->size].sex);
		cout << "请输入年龄:";
		cin >> (p->students[p->size].age);
		cout << "请输入电话:";
		cin >> (p->students[p->size].num);
		cout << "请输入住址:";
		cin >> (p->students[p->size].addres);
		p->size++;
		cout << "<<增加成功>>" << endl;
	}
	
}
int Find_student(const mark* p)//查找联系人
{
	if (p->size == 0)
	{
		cout << "<<通讯录为空,查找失败>>" << endl;
		return -1;
	}
	cout << "查找的人的姓名:";
		string name;
		cin >> name;
		for (int i = 0; i < p->size; i++)
		{
			if (p->students[i].name == name)
			{
				cout << "<<找到了>>" << endl;
				cout << "姓名\t" << "\t性别\t" << "\t年龄\t" << "\t电话\t" << "\t\t住址\t" << endl;
				cout << (p->students[i].name) << "\t";
				cout << "\t" << p->students[i].sex << "\t";
				cout << "\t" << p->students[i].age << "\t";
				cout << "\t" << p->students[i].num << "\t" << "\t";
				cout << "\t" << p->students[i].addres << "\t" << endl;
				return i;
			}
		}
		cout << "<<查无此人>>" << endl;	
		return -1;
}
void Printf(mark* p)//打印联系人
{
	if (p->size == 0)
	{
		cout << "<<当前通讯录为空>>" << endl;
		return;
	}
	cout << "姓名\t" << "\t性别\t" << "\t年龄\t" << "\t电话\t" << "\t\t住址\t" << endl;
	for (int i = 0; i < p->size; i++)
	{
		cout << (p->students[i].name)<<"\t";
		cout << "\t" << p->students[i].sex << "\t";
		cout << "\t" << p->students[i].age << "\t";
		cout << "\t" << p->students[i].num << "\t"<<"\t";
		cout << "\t" << p->students[i].addres <<"\t"<<endl;
	}
	
}
void rewrite_student(mark*p)//修改联系人
{
	if (p->size == 0)
	{
		cout << "<<通讯录为空,修改失败>>" << endl;
		return;
	}
	cout << "修改的人的姓名:";
	string name;
	cin >> name;
	int ret = is_exist(p, name);
	if (is_exist(p, name) == -1)
	{
		cout << "<<查无此人>>" << endl;
		return;
	}
	else
	{
		cout << "请输入姓名:";
		cin >> (p->students[ret].name);
		cout << "请输入性别:";
		cin >> (p->students[ret].sex);
		cout << "请输入年龄:";
		cin >> (p->students[ret].age);
		cout << "请输入电话:";
		cin >> (p->students[ret].num);
		cout << "请输入住址:";
		cin >> (p->students[ret].addres);
		cout << "<<修改成功>>" << endl;
	}

}
void pop_student(mark* p)//删除联系人
{
	if (p->size == 0)
	{
		cout << "<<通讯录为空,删除失败>>" << endl;
		return;
	}
	string name;
	cout << "删除的人的姓名:";
	cin >> name;
	int ret = is_exist(p, name);
	if (is_exist(p, name) == -1)
	{
		cout << "<<查无此人>>" << endl;
		return;
	}
	else
	{
		for (int i = ret; i < p->size - 1; i++)
		{
			p->students[i] = p->students[i + 1];
		}
		cout << "<<删除成功>>" << endl;
		p->size--;
	}
}
void Destroyed(mark* p)//销毁联系人
{
	p->size = 0;
	Printf(p);
	
}
void test()
{
	mark tmp;
	init_mark(&tmp);
	add_student(&tmp);
	rewrite_student(&tmp);
	Printf(&tmp);
}
void showMenu()
{
	cout << "********************" << endl;
	cout << "****1.增加联系人****" << endl;
	cout << "****2.显示联系人****" << endl;
	cout << "****3.删除联系人****" << endl;
	cout << "****4.查找联系人****" << endl;
	cout << "****5.修改联系人****" << endl;
	cout << "****6.清空联系人****" << endl;
	cout << "****0.退出通讯录****" << endl;
	cout << "********************" << endl;
}

void test2()
{
	mark tmp;
	init_mark(&tmp);
	int input = 0;
	do
	{
		showMenu();
		cout << "请输入选择:";
			cin >> input;
			switch (input)
			{
			case 1: {
				add_student(&tmp); cout << "请按任意键继续. . .";
				_getch();
				system("cls"); } break;
			case 2: {
				Printf(&tmp);
				cout << "请按任意键继续. . .";
				_getch();
				system("cls");
			}; break;
			case 3: {
				pop_student(&tmp);
				cout << "请按任意键继续. . .";
				_getch();
				system("cls"); }break;
			case 4: {
				Find_student(&tmp);
				cout << "请按任意键继续. . .";
				_getch();
				system("cls"); } break;
			case 5: {
				rewrite_student(&tmp);
				cout << "请按任意键继续. . .";
				_getch();
				system("cls");
			} break;
			case 6:{
				Destroyed(&tmp);
				cout << "请按任意键继续. . .";
				_getch();
				system("cls");
			} break;
			case 0:cout << "<<退出通讯录>>" << endl; break;
			default: {
				cout << "选择错误" << endl;
				cout << "请按任意键继续. . .";
				_getch();
				system("cls");
			}
			}
	} while (input);
}
void test3()
{
	mark tmp;
	init_mark(&tmp);
	int input = 0;
	do
	{
		showMenu();
		cout << "请输入选择:";
		cin >> input;
		switch (input)
		{
		case 1:
		{
		add_student(&tmp);
		 } break;
		case 2: 
		{
			Printf(&tmp);	
		}; break;
		case 3: 
		{
			pop_student(&tmp);
			}break;
		case 4: 
		{
		Find_student(&tmp);
		 } break;
		case 5:
		{
			rewrite_student(&tmp);	
		} break;
		case 6:
		{
		Destroyed(&tmp);
		} break;
		case 0:
			cout << "<<退出通讯录>>" << endl;
			break;
		default: 
		{
			cout << "选择错误" << endl;
		}
		}
		cout << "请按任意键继续. . .";
		_getch();//把上一次操作卡死，方便停留观察，防止清屏的时候一闪而过
		system("cls");
	} while (input);
}
int main()
{
	system("title 静态通讯录");//改变控制台名称
     test3();
	return 0;
}