#pragma once

#ifndef SINGER_H
#define SINGER_H
#include<string>
#include<vector>

using namespace std;

class Singer
{
private:

	int SingerID;

	string SingerName;

	vector<float> SingerMarks;//歌手每个评委的分数

	float Average; //歌手平均分

	int RaterNumbers = 0;//该歌手打分评委个数



public:

	static int SingerNumbers;//已出场歌手人数
	
	Singer(string name, int id);

	Singer();

	~Singer();

	//float ReturnAverage();


	void GetMarks(float mark);//获得分数

	void GetAverage();//计算平均分

	friend void PrintfMax();
	friend void PrintfMin();
	friend void PrintfMaxToMin();
	friend void PrintfMax();
	friend void PrintfMin();
	friend void AddSinger();
};


#endif
