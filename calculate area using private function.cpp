#include<iostream>
  using namespace std;
  class room {
  	private:
  		double length;
  		double breadth;
  		double height;
  		
  	public:
  		void initData(double len, double brth, double hgt) {
  			length = len;
  			breadth = brth;
  			height = hgt;
  			
		  }
		  
		  double calculateArea() {
		  	return length * breadth;
		  }
		  
		  double calculateVolume() {
		  	return length * breadth * height;
		  }
  };
  int main() {
  	room room1;
  	
  	room1.initData(42.5,32.8,19.5);
  	cout << "area of room = "<<room1.calculateArea()<<endl;
  	cout <<"volume of room = "<<room1.calculateVolume()<<endl;
  	
  		return 0;
}
