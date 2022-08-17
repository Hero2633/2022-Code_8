#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
#include<conio.h>
#pragma warning(disable:6031)//���Ծ���
#pragma warning(disable:26495)//���Դ���26495�ľ���
using namespace std;
#define MAX 100//����ͨѶ¼��С
typedef struct student//ͨѶ¼�ṹ��
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
	int size;//��¼��Ч����
};//��¼�ṹ������
int is_exist(mark*p,string ch)//�ж�ch�ַ����Ƿ����
{
	for (int i = 0; i < p->size; i++)
	{
		if (p->students[i].name == ch)
			return i;
	}
	return -1;
}
void init_mark(mark*p)//��ʼ��
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
void add_student(mark*p)//������ϵ��
{
	if (p->size == MAX)
	{
		cout << "�ռ�����\n";
	}
	else
	{
		cout << "����������:";
		cin >> (p->students[p->size].name);
		cout << "�������Ա�:";
		cin >> (p->students[p->size].sex);
		cout << "����������:";
		cin >> (p->students[p->size].age);
		cout << "������绰:";
		cin >> (p->students[p->size].num);
		cout << "������סַ:";
		cin >> (p->students[p->size].addres);
		p->size++;
		cout << "<<���ӳɹ�>>" << endl;
	}
	
}
int Find_student(const mark* p)//������ϵ��
{
	if (p->size == 0)
	{
		cout << "<<ͨѶ¼Ϊ��,����ʧ��>>" << endl;
		return -1;
	}
	cout << "���ҵ��˵�����:";
		string name;
		cin >> name;
		for (int i = 0; i < p->size; i++)
		{
			if (p->students[i].name == name)
			{
				cout << "<<�ҵ���>>" << endl;
				cout << "����\t" << "\t�Ա�\t" << "\t����\t" << "\t�绰\t" << "\t\tסַ\t" << endl;
				cout << (p->students[i].name) << "\t";
				cout << "\t" << p->students[i].sex << "\t";
				cout << "\t" << p->students[i].age << "\t";
				cout << "\t" << p->students[i].num << "\t" << "\t";
				cout << "\t" << p->students[i].addres << "\t" << endl;
				return i;
			}
		}
		cout << "<<���޴���>>" << endl;	
		return -1;
}
void Printf(mark* p)//��ӡ��ϵ��
{
	if (p->size == 0)
	{
		cout << "<<��ǰͨѶ¼Ϊ��>>" << endl;
		return;
	}
	cout << "����\t" << "\t�Ա�\t" << "\t����\t" << "\t�绰\t" << "\t\tסַ\t" << endl;
	for (int i = 0; i < p->size; i++)
	{
		cout << (p->students[i].name)<<"\t";
		cout << "\t" << p->students[i].sex << "\t";
		cout << "\t" << p->students[i].age << "\t";
		cout << "\t" << p->students[i].num << "\t"<<"\t";
		cout << "\t" << p->students[i].addres <<"\t"<<endl;
	}
	
}
void rewrite_student(mark*p)//�޸���ϵ��
{
	if (p->size == 0)
	{
		cout << "<<ͨѶ¼Ϊ��,�޸�ʧ��>>" << endl;
		return;
	}
	cout << "�޸ĵ��˵�����:";
	string name;
	cin >> name;
	int ret = is_exist(p, name);
	if (is_exist(p, name) == -1)
	{
		cout << "<<���޴���>>" << endl;
		return;
	}
	else
	{
		cout << "����������:";
		cin >> (p->students[ret].name);
		cout << "�������Ա�:";
		cin >> (p->students[ret].sex);
		cout << "����������:";
		cin >> (p->students[ret].age);
		cout << "������绰:";
		cin >> (p->students[ret].num);
		cout << "������סַ:";
		cin >> (p->students[ret].addres);
		cout << "<<�޸ĳɹ�>>" << endl;
	}

}
void pop_student(mark* p)//ɾ����ϵ��
{
	if (p->size == 0)
	{
		cout << "<<ͨѶ¼Ϊ��,ɾ��ʧ��>>" << endl;
		return;
	}
	string name;
	cout << "ɾ�����˵�����:";
	cin >> name;
	int ret = is_exist(p, name);
	if (is_exist(p, name) == -1)
	{
		cout << "<<���޴���>>" << endl;
		return;
	}
	else
	{
		for (int i = ret; i < p->size - 1; i++)
		{
			p->students[i] = p->students[i + 1];
		}
		cout << "<<ɾ���ɹ�>>" << endl;
		p->size--;
	}
}
void Destroyed(mark* p)//������ϵ��
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
	cout << "****1.������ϵ��****" << endl;
	cout << "****2.��ʾ��ϵ��****" << endl;
	cout << "****3.ɾ����ϵ��****" << endl;
	cout << "****4.������ϵ��****" << endl;
	cout << "****5.�޸���ϵ��****" << endl;
	cout << "****6.�����ϵ��****" << endl;
	cout << "****0.�˳�ͨѶ¼****" << endl;
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
		cout << "������ѡ��:";
			cin >> input;
			switch (input)
			{
			case 1: {
				add_student(&tmp); cout << "�밴���������. . .";
				_getch();
				system("cls"); } break;
			case 2: {
				Printf(&tmp);
				cout << "�밴���������. . .";
				_getch();
				system("cls");
			}; break;
			case 3: {
				pop_student(&tmp);
				cout << "�밴���������. . .";
				_getch();
				system("cls"); }break;
			case 4: {
				Find_student(&tmp);
				cout << "�밴���������. . .";
				_getch();
				system("cls"); } break;
			case 5: {
				rewrite_student(&tmp);
				cout << "�밴���������. . .";
				_getch();
				system("cls");
			} break;
			case 6:{
				Destroyed(&tmp);
				cout << "�밴���������. . .";
				_getch();
				system("cls");
			} break;
			case 0:cout << "<<�˳�ͨѶ¼>>" << endl; break;
			default: {
				cout << "ѡ�����" << endl;
				cout << "�밴���������. . .";
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
		cout << "������ѡ��:";
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
			cout << "<<�˳�ͨѶ¼>>" << endl;
			break;
		default: 
		{
			cout << "ѡ�����" << endl;
		}
		}
		cout << "�밴���������. . .";
		_getch();//����һ�β�������������ͣ���۲죬��ֹ������ʱ��һ������
		system("cls");
	} while (input);
}
int main()
{
	system("title ��̬ͨѶ¼");//�ı����̨����
     test3();
	return 0;
}