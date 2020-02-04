#include<iostream>
using namespace std;
int main(){

	string s1;
	string s2("constructor initilized");
	string s3 = "assignment operator initilized";
	string s4(s2); // copy constructor
	char array[]  = {'a' , 'r', 'r', 'a', 'y', '\0'};
	string s5(array); // char array to string
	cout<<s1<<endl;

	cout<<s2<<endl;

	cout<<s3<<endl;

	cout<<s4<<endl;

	cout<<s5<<endl;

	int length_of_s2 = s2.length();
	cout<<length_of_s2<<endl;
//compairing two strings
	//#1) compare function
	string a = "ankit";
	string b = "hello";

	if(a.compare(b)>0){
		cout<<"string a is lexi larger than string b"<<endl;

	} else {
		cout<<"string b is lexi larger than string a"<<endl;
	}

	// #2) overloaded operators..

	if(b>a){
		cout<<"overloaded operators: b is greater than a\n";
	}

// how to find any word in a string
	string toDel = "operator";
	int toDelSize = toDel.length();
	int index = s3.find(toDel);
	cout<<"The index of ''operator'' in the string is > "<<index<<endl;
	cout<<s3<<endl;

// how to erase some specific word from a string..

	s3.erase(index , toDel.length()); // where to where
	cout<<"s3 after erasing ''operator''  : "<<s3<<endl;

// append function
	s1.append("text appended");
	cout<<"s1 :"<<s1<<endl;

	s1 += "now using assignment operator";

	cout<<"s1 :"<<s1<<endl;

// iteratiing over string
	// #1) using iterators

	for(auto it = s1.begin(); it != s1.end(); it++){
		cout<<*it<<":";
	}
	cout<<endl;

	// for each loop
	for(auto i: s1){
		cout<<i<<".";
	}
	cout<<endl;

// checking if a string is empty
	if(!s1.empty()){
		cout<<"s1 isnt empty"<<endl;
	}

// copying certain characters from a string to new string

	string copied = s1.substr(0,10);
	cout<<"copied :"<<copied<<endl;
// How to get sub-string after a character?

	// Take any string 
    string s = "dog:cat"; 
  
    // Find position of ':' using find() 
    int pos = s.find(":"); 
  
    // Copy substring after pos 
    string sub = s.substr(pos + 1); 
  
    // prints the result 
    cout << "String sub : " << sub<<endl; 
	return 0;
}