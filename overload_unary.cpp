#include<iostream>
#include<conio.h>
 using namespace std;
 class demo
 {
 	int a;
 	int b;
 	public:
 		demo(int x, int y)
 		{
 			a = x;
 			b = y;
		 }
		 void display()
		 {
		 	cout << "a ="<< a <<endl;
		 	cout << "b ="<< b <<endl;
		 }
	
 };
 friend void operator - (demo obj);
 {
 	obj.a = obj.a;
 	obj.b = obj.b;
 	
 }
 int main()
 {
 	demo d1(10,20);
 	cout<<"before overloading ="<<d1<<endl;
 	d1.display();
 	-d1;
 	cout<<"after overloading = "<<d1<<endl;
 	d1.display();
 	return 0;
 }
