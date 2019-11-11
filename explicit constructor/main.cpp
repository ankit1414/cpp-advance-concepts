#include <iostream>
using namespace std;

class c1{

    int _value = 0;
    c1(); // private default constructor;
public:
    c1(const int &value) : _value(value){}  // to prevent implicit conversion add "explicit" keyword before the function definition
    //explicit  c1(const int &value) : _value(value){}
    int getValue() const {
        return _value;
    }

    void setValue(int value) {
        _value = value;
    }
};
void func(const c1 & o){
    printf("value is %d\n" , o.getValue());
}

int main() {

    c1 o = 'x';  // implicit conversion .. this will happen as long as class has only one member variable.
    printf("value is %d\n" , o.getValue());
    func('x');
    return 0;
}