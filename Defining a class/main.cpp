#include <iostream>
using namespace std;

//a very simple class
class c1{
    int i=0;
public:                                                 // in bigger projects the class definition is in .h file
    //void setvalue(const int & value){ i = value; } // preferred for one liner functions (for better readability.
    void setvalue(const int & );
    //int getvalue() const { return i; }            // preferred for one liner funtions only
    int getvalue() const;
};
void c1::setvalue(const int & value){                   // the implementation or member function will be in cpp file
    i = value;
}

int c1::getvalue() const{
    return i;
}
int main() {
    const int i=47;                                     // main function and everything will be in main.cpp or
                                                                // more cpp files
    c1 o1;
    o1.setvalue(i);
    cout<<"value is "<<o1.getvalue()<<endl;
    return 0;
}