#include<iostream>
using namespace std;

class demo
 {
 	static int i;
 	public:
 		static void init(int x)
 		{
 			i = x;
		 }
		 void show()
		 {
		 	cout << i;
		 }
 };
 int demo::i;
 int main()
 {
 	demo::init(1500);
 	demo obj;
 	obj.show();
 		return 0;
 }
