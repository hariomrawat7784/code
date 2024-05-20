#include<iostream>
 using namespace std;
   class test
   {
   	int code;
   	static int count;
   	public:
   		void set()
   		{
   			code = ++count;	
		}
		void show()
		{
			cout << "object number ="<<endl;
		}
		static void display()
		{
			cout << "count ="<<count<<endl;
		}
	};
	int test::count;
	int main()
	{
		test t1,t2,t3;
		t1.set();
		test::display();
		t2.set();
		t2.display();
		t3.set();
		t3.display();
		t1.show();
		t2.show();
		t3.show();
			return 0;
	}
  
