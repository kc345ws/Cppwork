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

	vector<float> SingerMarks;//����ÿ����ί�ķ���

	float Average; //����ƽ����

	int RaterNumbers = 0;//�ø��ִ����ί����



public:

	static int SingerNumbers;//�ѳ�����������
	
	Singer(string name, int id);

	Singer();

	~Singer();

	//float ReturnAverage();


	void GetMarks(float mark);//��÷���

	void GetAverage();//����ƽ����

	friend void PrintfMax();
	friend void PrintfMin();
	friend void PrintfMaxToMin();
	friend void PrintfMax();
	friend void PrintfMin();
	friend void AddSinger();
};


#endif
