#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char s[100] = "my name is ankit and today is my birthday";

	char *ptr = strtok(s, " "); // the first argument is char array and the second arg is delimiter(char or char array)
	cout<<ptr<<endl;

	// to fetch next word we can pass NULL instead of s in the function call since strtok maintains the state of the string s
	ptr = strtok(NULL , " ");
	cout<<ptr<<endl;

	cout<<"________________________________\n";

	char array[200] = "this is sublime text editior and i text love it";
	char *p = strtok(array , " ");
	cout<<p<<endl;
	while(p != NULL){
		p = strtok(NULL , " ");
		cout<<p<<endl;
	}


	return 0;
}