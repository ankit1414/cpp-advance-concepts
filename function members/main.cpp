#include <iostream>
using namespace std;

class A{
private:
    int _value = 0;
public:
    int getValue() const { // here const qualifier tell that it is const safe or const qualified
        return _value;
    }
    // here we can have 2 getvalue declaration one with const qualifier and one without both can co exist

    //rule const functions can always be called from mutable objects and from const qualified objects also..
    // but normal/non const cant be called for const qualified objects

    void setValue(int value) {
        _value = value;
    }
};

int main() {

    A a;
    a.setValue(42);
    printf("a is %d\n" , a.getValue());

    const A b =a;
    printf("b is %d\n" , b.getValue()); // const qualified object needs const qualified funtion. else compiler will giver error.
    return 0;
}