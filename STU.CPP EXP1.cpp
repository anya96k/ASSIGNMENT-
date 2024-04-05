#include <iostream>
using namespace std;
class Student {
   public:
   int rollno;
   char name[50];
   float marks;
   void display() {
      cout<<"Roll Number: "<< rollno <<endl;
      cout<<"Name: "<< name <<endl;
      cout<<"Marks: "<< marks <<endl;
   }
};
int main() {
   Student s1 = {46, "ANIKET", 100};//S1 OBJ USED AS FUNCTION
   s1.display();
   return 0;
}
