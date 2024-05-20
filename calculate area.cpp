#include<iostream>
  using namespace std;
  class room {
  	
  	public:
  		double length;
  		double breadth;
  		double height;
  		
  		double calculateArea() {
  			return length * breadth;
		  }
		  
		double calculateVolume() {
			return length * breadth * height;
		}
  };
  int main() {
  	//create object 
  	room room1;
  	
  	//assign values to data member
  	room1.length = 42.5;
  	room1.breadth = 30.8;
  	room1.height = 20.2;
  	
  	//calcuate and display the area and volume if the room
  	cout<<"area if the room"<<room1.calculateArea()<<endl;
  	cout<<"volume of the room"<<room1.calculateVolume()<<endl;
  	
  		return 0;
  }
