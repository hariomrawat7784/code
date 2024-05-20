#include<iostream>
 using namespace std;
 class demo
 {
 	int a;
 	public:
 		demo(int x)
 		{
 			a = x;
 			cout <<"constructor is called"<< endl;
		}
		 int demo()
		{
		 	cout<<"destructor is called"<<endl;
		}
		 void display()
		{
		 	cout <<"value of a is:"<<a<<endl;
		}
 };
 int main()
 {
 	demo obj(250);
 	obj.demo();
 	return 0;
 }
