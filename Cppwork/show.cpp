#include"show.h"
#include"Singer.h"
#include<iostream>
#include<vector>
#include<conio.h>
Singer *singer = new Singer[1000];
Singer *singerfirst = singer + 0;
using namespace std;



void PrintfAppearedNumber()//��ӡ�ѳ�����������
{
	if (Singer::SingerNumbers == 0)
	{
		cout << "��û���κθ��ֳ���" << endl;
		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}
	cout << "�ѳ�����������Ϊ:" << endl;
	cout << Singer::SingerNumbers << endl;

	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void AddSinger()
{
	string name;
	int id, number;
	float mark;
	/*vector<Singer> *singerpoint = new vector<Singer>;
	vector<Singer> singer;
	vector<Singer>::iterator iter = singer.begin();*/
	
	cout << "��������ֵ�����" << endl;
	cin >> name;
	cout << "��������ֵ�ID" << endl;
	cin >> id;
	singer->Singer::Singer(name, id);
	cout << "��������и���" << endl;
	cin >> number;
	
	for (int i = 0; i < number; i++)
	{
		cout << "�������" << i + 1 << "�����е�����" << endl;
		cin >> mark;
		if (mark < 0 || mark>100)
		{
			cout << "������ΧΪ(0 - 100) ����������" << endl;
			i--;
			continue;
		}
		else
			singer->GetMarks(mark);
	}
	cout << "ƽ����Ϊ:" << endl;
	singer->GetAverage();
	cout << singer->Average << endl;
	singer++;
	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void PrintfMax()
{
	//Singer Maxsinger ;
	//Maxsinger.Average = 0;
	Singer Temp;
	//int Max = 0;
	singer = singerfirst;
	if (Singer::SingerNumbers == 0)
	{
		cout << "��¼���κθ�����Ϣ" << endl;
		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}
	if (Singer::SingerNumbers == 1)
	{
		cout << "����Ϊ��߷ָ�����Ϣ" << endl;
		cout << "����:" << (singer + 0)->SingerName << endl;
		cout << "ID:" << (singer + 0)->SingerID << endl;
		cout << "ƽ����:" << (singer + 0)->Average << endl;

		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}
	for (int i = 0; i < Singer::SingerNumbers - 1; i++)
	{

		for (int j = i +1; j < Singer::SingerNumbers; j++)
		{
		
			if (((singer + i)->Average) < ((singer + j)->Average))
			{
				Temp = *(singer + i);
				*(singer + i) = *(singer + j);
				*(singer + j) = Temp;
			}
	    }
	}
	cout << "����Ϊ��߷ָ�����Ϣ" << endl;
	cout << "����:" << (singer+0)->SingerName << endl;
	cout << "ID:" << (singer + 0)->SingerID << endl;
	cout << "ƽ����:" << (singer + 0)->Average << endl;

	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void PrintfMin()
{
	Singer Temp;
	//int Min = 100;
	singer = singerfirst;
	if (Singer::SingerNumbers == 0)
	{
		cout << "��¼���κθ�����Ϣ" << endl;
		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}
	if (Singer::SingerNumbers == 1)
	{
		cout << "����Ϊ��ͷָ�����Ϣ" << endl;
		cout << "����:" << (singer + 0)->SingerName << endl;
		cout << "ID:" << (singer + 0)->SingerID << endl;
		cout << "ƽ����:" << (singer + 0)->Average << endl;

		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}

	for (int i = 0; i < Singer::SingerNumbers - 1; i++)
	{
	
		for (int j = i + 1; j < Singer::SingerNumbers; j++)
		{

			if (((singer + i)->Average) < ((singer + j)->Average))
			{
				Temp = *(singer + i);
				*(singer + i) = *(singer + j);
				*(singer + j) = Temp;
			}
		}
	}

	cout << "����Ϊ��ͷָ�����Ϣ" << endl;
	cout << "����:" << (singer + (Singer::SingerNumbers-1))->SingerName << endl;
	cout << "ID:" << (singer + (Singer::SingerNumbers-1))->SingerID << endl;
	cout << "ƽ����:" << (singer + (Singer::SingerNumbers-1))->Average << endl;

	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void PrintfMaxToMin()
{
	Singer Temp;
	singer = singerfirst;
	if (Singer::SingerNumbers == 0)
	{
		cout << "��¼���κθ�����Ϣ" << endl;
		cout << "����������ز˵�" << endl;
		getch();
		system("cls");
		Menu();
	}
	for (int i = 0; i < (Singer::SingerNumbers) - 1; i++)
	{
		for (int j = i + 1; j < Singer::SingerNumbers; j++)
		{
			if ((singer + i)->Average < (singer + j)->Average)
			{
				Temp = *(singer + i);
				*(singer + i) = *(singer + j);
				*(singer + j) = Temp;
			}
		}
	}

	for (int k = 0; k < Singer::SingerNumbers; k++)
	{
		cout << "��" << k + 1 << "������" << endl;
		cout << "����:" << (singer + k)->SingerName << endl;
		cout << "ID:" << (singer + k)->SingerID << endl;
		cout << "ƽ����:" << (singer + k) -> Average << endl;
		cout << endl;
	}

	//cout << "���и�����Ϣ���ͷţ�������¼����Ϣ" << endl;
	//delete []singer;

	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void DeleteSingers()
{
	cout << "���и�����Ϣ��ɾ��" << endl;
	delete[]singer;
	//Singer *singer = new Singer[1000];
	//Singer *singerfirst = singer + 0;
	exit(0);


	cout << "����������ز˵�" << endl;
	getch();
	system("cls");
	Menu();
}

void Menu()
{
	int Select;
	cout << "���������蹦��" << endl;
	cout << "1.��Ӹ���" << endl;
	cout << "2.�鿴��߷�ѡ����Ϣ" << endl;
	cout << "3.�鿴��ͷ�ѡ����Ϣ" << endl;
	cout << "4.�鿴�ѳ�����������" << endl;
	cout << "5.�������Ӹߵ��ʹ�ӡ���и�����Ϣ" << endl;
	cout << "6.ɾ�����и�����Ϣ" << endl;
	cin >> Select;
	switch (Select)
	{
	case 1:
		{
		AddSinger();
		break;
		}
	case 2:
		{
		PrintfMax();
		break;
		}
	case 3:
		{
		PrintfMin();
		break;
		}
	case 4:
		{
		PrintfAppearedNumber();
		break;
		}
	case 5 :
		{
		PrintfMaxToMin();
		break;
		}
	case 6:
		{
		DeleteSingers();
		break;
		}
	}
}