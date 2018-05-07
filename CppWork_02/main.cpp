#include<iostream>
#include"Shape.h"
using namespace std;

int main()
{
	Manage s;
	s.f(0) = new Shape;
	s.f(1) = new Circle;
	s.f(2) = new Triangle;
	Manage t(s);
	//t.a[0]->area();
	t.a[1]->area();
	t.a[2]->area();
	//t.a[0]->Show();
	t.a[1]->Show();
	t.a[2]->Show();
	return 0;
}