#include <iostream>
using namespace std;

class Employee {
  private:
    
    double salary;
    int id;
    string pos;
  public:
    
    void set(double s,int i,string p) {
    	id=i;
    	pos=p;
      salary = s;
    }
   
    void display(){
    	cout<<salary<<endl;
    	cout<<id<<endl;
    	cout<<pos<<endl;
	}
};

int main() {
  Employee myObj;
  myObj.set(22500,123007,"staff");//string comes under""
  myObj.display(); 
  return 0;
}
