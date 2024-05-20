#include<iostream>
using namespace std;
class first
{
	private:
		int a;
	public:
		void setvalue(int x)
		{
			a = x;
		}
		friend void add(first obj, second obj);
};
class second
{
	private:
		int b;
	public:
		void setdata(int y)
		{
			b = y;
		}
		friend void add		
};
void add(first obj1, second obj2)
{
	cout<<"sum ="<<obj1.a + obj2.b;
}
int main()
{
	first t1;
	second t2;
	t1.setvalue(5);
	t2.setdata(10);
	add(t1,t2);
	return 0;
}
