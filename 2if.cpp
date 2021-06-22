#include<iostream>
using namespace std;
int main()
{
	int a=10,b=25,c=24,d=13;
	if(a>b&&a>c&&a>d)
	{
		cout<<"A is greater";
		
	}
	else
	{
		if(b>c&&b>d)
		cout<<"B is greater";
		else
		{
			if(c>d)
			cout<<"c is greater";
			else
			cout<<"D is greater";
		}
		
	}
 	return 0;
}



