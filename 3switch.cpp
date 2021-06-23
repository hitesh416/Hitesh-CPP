#include<iostream>
using namespace std;
int main()
{
	int a=12,b=22;
	char c;
	cin>>c;
	switch(c)
	{
		case '+':
		cout<<a+b;
		break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
			cout<<"invaild opertoror";
	}
	

 	return 0;
}

