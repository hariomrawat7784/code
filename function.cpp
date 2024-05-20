#include<iostream>
#include<conio.h>
using namespace std;
int max(int a, int b, int c); //function prototype
int main()
{
	int x,y,z,m ;
	cout << "Enter first no . :";
	cin >> x;
	cout << "\n Enter second no. :";
	cin >> y;
	cout<<"\n ENter second no, :";
	cin >> z;
	m = max(x,y,z);
	cout << "\n maximum nuber is :"<< m ;
}
int max(int a, int b, int c)// function calling
{
	if(a>b)
	{
		if(a>c)
		{
			return(a);
		}
		else
		return(c);
	}
	if (c > a)
	{
		if(b>c)
		{
			return (b);
		}
	return (c);
	}
	
}

