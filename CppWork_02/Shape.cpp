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
	cout << "此图形面积为：" << endl;
	cout << S << endl;
}