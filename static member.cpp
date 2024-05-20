#include<iostream>
using namespace std;
 class item
 {
 	static int count; //static member declaration
 	int number; //normal declaration
 	public: //access definer
 	
 	void getdata(int a) //memeber function declaration
 	{
 		number = a;
 		count++;
	 }
	 void getcount() //member function declaration
	 {
	 	cout << "count ="<<count<<endl;
	 }
 };
 int item::count; //static data member defination
 int main()
 
{
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
	cout << "after reading data"<< endl;
	a.getcount();
	b.getcount();
	c.getcount();
		return 0;
}
