// CPP_Course_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "MyException.h"
using namespace std;

class Test
{
public:
	void goesWrong()
	{
		throw MyException();
	}
};

void Exception()
{
	string a;
	cin >> a;
	if (a == "error")
		//string throwen  -> catchen met een const char[] NIET met string, behalve als met een string("message") 
		throw "an error has occured";
	if (a == "int")
		throw 10;
}

int main1()
{

	try
	{
		//Exception();
		Test test;
		test.goesWrong();
	}
	catch (const char[])
	{
		cout << "error is a string" << endl;
	}
	catch(int)
	{
		cout << "error is an int" << endl;
	}catch(MyException &e)
	{
		cout << e.what() << endl;
	}

    return 0;
}

