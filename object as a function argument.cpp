#include<iostream>
using namespace std;
  class demo
  {
  	private:
  		int a;
  		public:
  			void setvalue(int x)
  			{
  				a = x;
			}
			void sum(demo obj1, demo obj2)
			{
				a = obj1.a + obj2.a;
			}
			void display()
			{
				cout<<"value of a ="<<a<<endl;
			}		  
  };
  int main()
  {
  	demo d1,d2,d3;
  	d1.setvalue(10);
  	d2.setvalue(20);
  	d3.sum(d1,d2);
  	d1.display();
  	d2.display();
  	d3.display();
  	return 0;
  }
  
