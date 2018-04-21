#include<iostream>
#include"Singer.h"

using namespace std;
int Singer::SingerNumbers = 0;//已出场歌手人数

Singer::Singer (string name , int id)
{
	Singer::SingerName = name;
	Singer::SingerID = id;
	Singer::SingerNumbers++;
}

Singer::Singer()
{

}

Singer::~Singer()
{
	/*SingerNumbers --;*/
}

void Singer::GetMarks(float mark)
{
	Singer::SingerMarks.emplace_back(mark);
	Singer::RaterNumbers++;
}

void Singer::GetAverage()
{
	float Sum = 0;
	for (int i = 0; i < Singer::RaterNumbers; i++)
	{
		Sum += Singer::SingerMarks[i];
	}
	Singer::Average = (Sum / Singer::RaterNumbers);
}



//float Singer::ReturnAverage()
//{
//	return Singer::Average;
//}

