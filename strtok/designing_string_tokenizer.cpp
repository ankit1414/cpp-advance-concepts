#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str , char delimit){

	static char *input=NULL;
	if(str != NULL){
		//When we ARE MAKING THE FIRST CALL
		input = str;
	}
	//BASE CASE after the final token has been returned
	if(input == NULL){
		return NULL;
	}

	char *output = new char[strlen(input)+1];
	int i=0;
	for( ; input[i]!='\0'; i++){
		if(input[i] != delimit){
			output[i] = input[i];

		} else {
			output[i] = '\0';
			input = input+i+1;
			return output;
		}
	}
	// corner case when the last token 
	output[i] = '\0';
	input = NULL;
	return output;
}
int main(){

	char s[100] = "my name is ankit and today is my birthday";
	char *p = mystrtok(s , ' ');
	cout<<p<<endl;
	while(p != NULL){
		p = mystrtok(NULL , ' ');
		cout<<p<<endl;
	}
	return 0;
}