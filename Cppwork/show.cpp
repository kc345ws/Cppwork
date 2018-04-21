#include"show.h"
#include"Singer.h"
#include<iostream>
#include<vector>
#include<conio.h>
Singer *singer = new Singer[1000];
Singer *singerfirst = singer + 0;
using namespace std;



void PrintfAppearedNumber()//打印已出场歌手人数
{
	if (Singer::SingerNumbers == 0)
	{
		cout << "还没有任何歌手出场" << endl;
		cout << "按任意键返回菜单" << endl;
		getch();
		system("cls");
		Menu();
	}
	cout << "已出场歌手人数为:" << endl;
	cout << Singer::SingerNumbers << endl;

	cout << "按任意键返回菜单" << endl;
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
	
	cout << "请输入歌手的名字" << endl;
	cin >> name;
	cout << "请输入歌手的ID" << endl;
	cin >> id;
	singer->Singer::Singer(name, id);
	cout << "请输入裁判个数" << endl;
	cin >> number;
	
	for (int i = 0; i < number; i++)
	{
		cout << "请输入第" << i + 1 << "个裁判的评分" << endl;
		cin >> mark;
		if (mark < 0 || mark>100)
		{
			cout << "分数范围为(0 - 100) 请重新输入" << endl;
			i--;
			continue;
		}
		else
			singer->GetMarks(mark);
	}
	cout << "平均分为:" << endl;
	singer->GetAverage();
	cout << singer->Average << endl;
	singer++;
	cout << "按任意键返回菜单" << endl;
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
		cout << "还录入任何歌手信息" << endl;
		cout << "按任意键返回菜单" << endl;
		getch();
		system("cls");
		Menu();
	}
	if (Singer::SingerNumbers == 1)
	{
		cout << "以下为最高分歌手信息" << endl;
		cout << "姓名:" << (singer + 0)->SingerName << endl;
		cout << "ID:" << (singer + 0)->SingerID << endl;
		cout << "平均分:" << (singer + 0)->Average << endl;

		cout << "按任意键返回菜单" << endl;
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
	cout << "以下为最高分歌手信息" << endl;
	cout << "姓名:" << (singer+0)->SingerName << endl;
	cout << "ID:" << (singer + 0)->SingerID << endl;
	cout << "平均分:" << (singer + 0)->Average << endl;

	cout << "按任意键返回菜单" << endl;
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
		cout << "还录入任何歌手信息" << endl;
		cout << "按任意键返回菜单" << endl;
		getch();
		system("cls");
		Menu();
	}
	if (Singer::SingerNumbers == 1)
	{
		cout << "以下为最低分歌手信息" << endl;
		cout << "姓名:" << (singer + 0)->SingerName << endl;
		cout << "ID:" << (singer + 0)->SingerID << endl;
		cout << "平均分:" << (singer + 0)->Average << endl;

		cout << "按任意键返回菜单" << endl;
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

	cout << "以下为最低分歌手信息" << endl;
	cout << "姓名:" << (singer + (Singer::SingerNumbers-1))->SingerName << endl;
	cout << "ID:" << (singer + (Singer::SingerNumbers-1))->SingerID << endl;
	cout << "平均分:" << (singer + (Singer::SingerNumbers-1))->Average << endl;

	cout << "按任意键返回菜单" << endl;
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
		cout << "还录入任何歌手信息" << endl;
		cout << "按任意键返回菜单" << endl;
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
		cout << "第" << k + 1 << "名歌手" << endl;
		cout << "姓名:" << (singer + k)->SingerName << endl;
		cout << "ID:" << (singer + k)->SingerID << endl;
		cout << "平均分:" << (singer + k) -> Average << endl;
		cout << endl;
	}

	//cout << "所有歌手信息已释放，请重新录入信息" << endl;
	//delete []singer;

	cout << "按任意键返回菜单" << endl;
	getch();
	system("cls");
	Menu();
}

void DeleteSingers()
{
	cout << "所有歌手信息已删除" << endl;
	delete[]singer;
	//Singer *singer = new Singer[1000];
	//Singer *singerfirst = singer + 0;
	exit(0);


	cout << "按任意键返回菜单" << endl;
	getch();
	system("cls");
	Menu();
}

void Menu()
{
	int Select;
	cout << "请输入所需功能" << endl;
	cout << "1.添加歌手" << endl;
	cout << "2.查看最高分选手信息" << endl;
	cout << "3.查看最低分选手信息" << endl;
	cout << "4.查看已出场歌手人数" << endl;
	cout << "5.按分数从高到低打印所有歌手信息" << endl;
	cout << "6.删除所有歌手信息" << endl;
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