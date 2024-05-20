#include<iostream>
  using namespace std;
  class animal{
  	public:
  		void eat()
  		{
  			cout <<"i can eat"<<endl;
		  }
		  void sleep()
		  {
		  	cout<<"i can sleep"<<endl;
		  }
  };
  class dog:public animal
  {
  	public:
  		void bark()
  		{
  			cout<<"i can bark!wooh wooh"<<endl;
		  }
  };
  int main()
  {
  	dog obj;
  	obj.eat();
  	obj.sleep();
  	obj.bark();
  	return 0;
  }
