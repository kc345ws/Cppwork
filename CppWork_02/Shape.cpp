#include"Shape.h"
#include<iostream>
const double PAI = 3.14;
using namespace std;

double Circle::area()
{
	S = PAI * R*R;
	return S;
}

double Triangle::area()
{
	S = (1.0 / 2) * L*H;
	return S;
}

void Shape::Show()
{
	cout << "��ͼ�����Ϊ��" << endl;
	cout << S << endl;
}