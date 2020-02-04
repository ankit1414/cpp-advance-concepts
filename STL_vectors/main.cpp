#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main() {
    vector<int> v(10 , 1); // here first parameter is size and second is value of all the array elements
//    for(int i=0; i<10000; i++){ // this will give error
//        v[i] = i;
//    }
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
//    for(int i=0; i<10; i++)
//        v[i] = i;
    v.push_back(14);
    v.push_back(12);

    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.resize(100); // it changes the size of the vector
    cout<<std::accumulate(v.begin(), v.end() , 0)<<endl; // accumulate is used if we want to sum all the elements of a vector or array
    cout<<"size' : "<<v.size()<<endl;
    v.reserve(12000); // it changes the capacity of array inside the vector
    cout<<"capacity' : "<<v.capacity()<<endl;

    cout<<"--------------------------------------"<<endl;

    // 2 d vector

    vector< vector<int> > grid(3 , vector<int>(4 , 7)); //
    for(int row=0; row<grid.size(); row++){
        for(int col = 0; col < grid[row].size(); col++){
            cout<< grid[row][col]<<flush;
        }
        cout<<endl;
    }
    return 0;
}