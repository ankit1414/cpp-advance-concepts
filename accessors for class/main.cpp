#include <iostream>
using namespace std;
class A{
    int ia =0;
    const char * sb = "";
    int ic = 0;
public:
    A (const int a , const char * b , const int c) : ia(a) , sb(b) , ic(c) {}; //constructor
    void seta (const int a){ ia = a; }
    void setsb(const char *b ){ sb = b;}
    void setic(const int c){ ic = c; }
    int geta(){ return  ia;}
    const char * getsb() const { return sb; }
    int getic(){ return ic; }
};

int main() {
    A a1(1 , "hello" , 3);
    printf("ia is %d , sb is %s , ic is %d\n", a1.geta() , a1.getsb() , a1.getic());
    return 0;
}