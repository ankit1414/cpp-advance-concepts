#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <list>
using namespace std;

#define USE_VECTOR
//#define USE_LIST

class guest{
public:
    guest(){}
    ~guest(){}
    void set_gender(string in){
        char i = in.c_str()[0];
        if(i == 'B' || i == 'b' || i == 'm' || i == 'M')
            gender = "Boy";
        else
            gender = "Girl";

    }
    string name;
    string gender;
    int age;
};

#ifdef USE_VECTOR
    typedef vector<guest> my_container;
#elif defined USE_LIST
    typedef list<guest> my_container;
#endif

    void read_file(my_container * my_guest){
        string in_str;
        ifstream in_file;
        in_file.open("datafile.txt");
        if(in_file.is_open()){
            guest temp;
            while(getline(in_file , in_str)){
                temp.name = in_str;
                getline(in_file , in_str);
                temp.gender = in_str;
                getline(in_file , in_str);
                temp.age = stoi(in_str);
                my_guest->push_back(temp);

            }

            in_file.close();

        } else {
            cout<<"error : couldn't open the file"<<endl;
        }

    }

    void print_guests(my_container * my_guest){
        auto it = my_guest->begin();
        cout<<"-- container content start --\n";
        cout<<"-----------------------------\n";
        //while(it < my_guest->end()){ // only for vector
            while(it != my_guest->end()){ // for list as well as vector

            cout<<it->name<<"\n"<<it->gender<<"\n"<<it->age<<endl;
            cout<<"-----------------------------\n";

            //it+=1; // for vector will not work with list
            it++; // for list  and vector also
        }
        cout<<"--  container content end  --\n";

    }
int main() {
    my_container * my_guest = new my_container;
    read_file(my_guest);
    print_guests(my_guest);
    return 0;
}