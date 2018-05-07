#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape
{

public:

	virtual double area()
	{
		return S;
	}

	virtual Shape* point()
	{
		return(new Shape(*this));
	}

	virtual void Show();

protected:

	double S;

};

class Circle : public Shape
{

public:

	double area();

	Circle()
	{
		cout << "����Բ�İ뾶" << endl;
		cin >> R;
		if (R <= 0)
		{
			cout << "����뾶������������������" << endl;
			cin >> R;
		}
	}

	Shape* point()
	{
		return(new Circle(*this));
	}

private:
	double R;
};

class Triangle :public Shape
{

public:

	double area();

	Triangle()
	{
		cout << "�������ǵĵױߺ͸�" << endl;
		cin >> L;
		if (L <= 0)
		{
			cout << "����ĵױ�������������������" << endl;
			cin >> L;
		}
		cin >> H;
		if (H <= 0)
		{
			cout << "����ĸ�������������������" << endl;
			cin >> H;
		}
	}

	Shape * point()
	{
		return(new Triangle(*this));
	}

private:
	double L, H;
};

class Manage
{
private:


public:

	Shape * a[100];

	Manage()
	{

	}

	Manage(Manage &s)
	{
		for (int i = 0; i < 3; i++)
		{
			this->a[i] = s.a[i]->point();
		}
	}

	Shape *&f(int k)
	{
		return a[k];
	}

};
#endif