#include<iostream>
 using namespace std;
  class second;
  class first
  {
  	private:
  		int a;  //data member 
  		public:
  			first(int x)	//constructor
  			{
  				 a = x;
			}
			friend void swap(first,second); //friend function declaration
  };
  class second
  {
  	private:
  	int b; 	//data member 
  	public: 	//access definer
  		second(int y)		//constructor
  		{
  			b = y;
		  }
		  friend void swap(first,second);	//friend function declaration
  };
  void swap(first obj1,second obj2) // function defination
  {
  	int temp;
  	temp = obj1.a;
  	obj1.a=obj2.b;
  	obj2.b=temp;
  	cout <<"after swapping value of class first ="<<obj1.a<<endl;
  	cout << "after swapping value of class second ="<<obj2.b<<endl;
  }
  int main()
  {
  	first obj1(5);
  	second obj2(10);
  	swap(obj1,obj2);
  	return 0;
  }
