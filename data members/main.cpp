#include <iostream>
using namespace std;

struct A{
    int ia;
    const char * sb = "";
    int ic;
};

int main() {
    A a;
    a.ia = 1;
    a.sb = "two";
    a.ic = 3;
    cout<<"ia = "<<a.ia<<", " <<"sb = "<<a.sb<<", "<<"ic = "<<a.ic<<endl;

    return 0;
}