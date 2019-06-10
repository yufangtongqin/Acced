// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CBase
{
protected:
	int a;
public:
	CBase()
	{
		int a;
	}
	CBase(int c)
	{
		a = c;
	}
};
class CYF :CBase
{
public:
	CYF()
	{
		a = 0;
	}
	CYF(int c)
	{
		a = c;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};
int main()
{
	CYF obj(100);
	obj.display();
    return 0;
}

