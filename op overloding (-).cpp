#include <iostream>
using namespace std;
 
class op {
    private:
        int value;
    public:
        op(int v) : value(v) { }
        op operator-(op i) {
            value = value - i.value;
            return *this;
        }
	int getValue() { 
            return value;
        }
};
 
int main()
{
    op a(10), b(20);
 
    cout << "a = " << a.getValue() << endl;
    cout << "b = " << b.getValue() <<endl;
    cout << "a - b = " << (a -b).getValue() << endl;
    return 0;
}
