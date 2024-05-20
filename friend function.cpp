#include<iostream>
using namespace std;
  class addition
  {
  	private:
  		int a,b;
  	public:
  		addition(int x, int y)
  		{
  			a = x;
  			b = y;
		}
		friend int add(addition obj);
  };
  int add(addition obj)
  {
  	int c;
  	c = obj.a + obj.b;
  	return(c);
  }
  int main()
  {
  	addition t(20,40);
  	cout<<add(t);
  	return 0;
  }
