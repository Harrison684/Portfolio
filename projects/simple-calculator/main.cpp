#include<iostream>
using namespace std;
int main(){
	double num1,num2;
	char operation;
	cout<<"Enter the first number:";
	cin>>num1;
	
	cout<<"Enter the operation(+,-,*,/):";
	cin>>operation;
	
	cout<<"Enter the second number:";
	cin>>num2;
	if(operation =='+'){
		cout<<"Answer:"<<num1+num2;
	}
	
		else if(operation =='-'){
		cout<<"Answer:"<<num1-num2;
	}
	
	else if(operation =='*'){
		cout<<"Answer:"<<num1*num2;
	}
	
		else if(operation =='/'){
		cout<<"Answer:"<<num1/num2;
	}
	
		else{
			cout<<"Invald operation";
		}
		return 0;
	}
