#include<iostream>
  using namespace std;
  class a{
  	public:
  		void display()
  		{
  			cout<<"i am a class a"<<endl;
		  }
  };
  class b{
  	public: 
  	void name()
  	{
  		cout<<"i am a class b"<<endl;
	  }
  };
  class c :public a, public b
  {
  	public:
  		void paint()
  		{
  			cout<<"i am a class c"<<endl;
		  }
  };
  int main()
  {
  	 c obj;
  	 obj.display();
  	 obj.name();
  	 obj.paint();
  	 return 0;
  }
  
