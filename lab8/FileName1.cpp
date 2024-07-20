#include<iostream>
using namespace std;

class Exception
{
protected:
	string reason;
public:
	Exception()
	{
		this->reason = "some exeption";
	}
	Exception(string reason)
	{
		this->reason = reason;
	}
	void printReason()
	{
		cout << "reason" << endl;
	}
};

int doSome(int a, int b)
{
	if (b - 1 == 0)
		throw Exception("cannot divide by 0");
	if (b > a)
		throw Exception("rez mai mic ca 1");
	return a/(b-1);
}

int main()
{
	try
	{
		doSome(14, 7);
	}
		catch (Exception c)
		{c.printReason(); }
		return 0;
}
